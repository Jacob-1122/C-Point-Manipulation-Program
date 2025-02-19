#include <iostream>
#include "Point.h"

using namespace std;

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int xCoord, int yCoord) {
    x = xCoord;
    y = yCoord;
}

void Point::setX(int xCoord) {
    x = xCoord;
}

int Point::getX() const {
    return x;
}

void Point::setY(int yCoord) {
    y = yCoord;
}

int Point::getY() const {
    return y;
}

Point::Quadrant Point::whichQuadrant() {
    if (x > 0 && y > 0) {
        return I;
    }
    else if (x < 0 && y > 0) {
        return II;
    }
    else if (x < 0 && y < 0) {
        return III;
    }
    else if (x > 0 && y < 0) {
        return IV;
    }
    else {
        return I;
    }
}

void Point::displayPoint() {
    cout << "(" << x << "," << y << ")";
}
//Jacob Goings

#include <iostream>
#include <fstream>
#include <string>
#include "Point.h"

using namespace std;

bool isInSameQuadrant(Point, Point);
string quadToString(Point);

int main() {

    ifstream infile("points.txt");

    int num;
    cout << "Enter number of points: ";
    cin >> num;

    Point* pointsArray = new Point[num];

    int x, y;
    for (int i = 0; i < num; i++) {
        infile >> x >> y;
        Point p(x, y);
        pointsArray[i] = p;
    }

    // close input file
    infile.close();

    int tally[4] = { 0 };
    for (int i = 0; i < num; i++) {
        Point::Quadrant q = pointsArray[i].whichQuadrant();
        tally[q]++;
    }

    for (int i = 0; i < 4; i++) {
        int quad = i;
        string quads;
        switch (quad) {
        case 0:
            quads = "I";
            break;
        case 1:
            quads = "II";
            break;
        case 2:
            quads = "III";
            break;
        case 3:
            quads = "IV";
            break;
        }
        cout << "Quadrant " << quads << " has " << tally[i] << " points" << endl;
    }

    cout << "List of points:" << endl;
    for (int i = 0; i < num; i++) {
        cout << i + 1 << " ";
        pointsArray[i].displayPoint();
        cout << endl;
    }

    int index1, index2;
    cout << "Pick two points from the list, enter their associated numbers separated by space: ";
    cin >> index1 >> index2;

    Point point1 = pointsArray[index1 - 1];
    Point point2 = pointsArray[index2 - 1];

    bool sameQuadrant = isInSameQuadrant(point1, point2);
    if (sameQuadrant) {
        cout << "The two points are in the same quadrant." << endl;
    }
    else {
        cout << "The two points are not in the same quadrant." << endl;
    }

    Point* mirror1 = new Point(point1.getX(), -point1.getY());
    Point* mirror2 = new Point(-point2.getX(), point2.getY());

    cout << "Quadrant of point " << index1 << ": " << quadToString(point1) << endl;
    cout << "Quadrant of point " << index2 << ": " << quadToString(point2) << endl;
    cout << "Quadrant of mirror image of point " << index1 << " over x-axis: " << quadToString(*mirror1) << endl;
    cout << "Quadrant of mirror image of point " << index2 << " over y-axis: " << quadToString(*mirror2) << endl;

    delete[] pointsArray;
    delete mirror1;
    delete mirror2;

    return 0;
}

bool isInSameQuadrant(Point p1, Point p2) {
    return (p1.whichQuadrant() == p2.whichQuadrant());
}

string quadToString(Point p) {
    Point::Quadrant quad = p.whichQuadrant();
    switch (quad) {
    case Point::I:
        return "I";
    case Point::II:
        return "II";
    case Point::III:
        return "III";
    case Point::IV:
        return "IV";
    default:
        return "";
    }
}

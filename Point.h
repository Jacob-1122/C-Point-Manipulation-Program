#ifndef POINT_H
#define POINT_H

class Point
 {
     private:
        int x;
        int y;
    public:
        Point();
        Point(int, int);
        enum Quadrant{I, II, III, IV};
        void setX(int);
        int getX() const;
        void setY(int);
        int getY() const;
        Quadrant whichQuadrant();
        void displayPoint();
};
#endif

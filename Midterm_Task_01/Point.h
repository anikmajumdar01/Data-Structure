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
    int get_X();
    void set_X(int);
    int get_Y();
    void set_Y(int);
    void Print_Co_Ordinate();
    bool operator<(Point& p);
    bool operator>(Point& p);
    bool operator==(Point& p);
};
#include"Point.tpp"
#endif // POINT_H

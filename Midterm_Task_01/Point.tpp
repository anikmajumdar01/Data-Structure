#include"Point.h"
#include<iostream>
#include<math.h>
using namespace std;

Point::Point()
{
    x=0;
    y=0;
}

Point::Point(int x, int y)
{
    this->x=x;
    this->y=y;
}

int Point::get_X()
{
    return x;
}

void Point::set_X(int x)
{
    this->x=x;
}

int Point::get_Y()
{
    return y;
}

void Point::set_Y(int y)
{
    this->y=y;
}

void Point::Print_Co_Ordinate()
{
    cout<<"( "<<x<<","<<y<<" )"<<endl;
}

bool Point::operator>(Point &p)
{
    float compare1,compare2;
    compare1=(float)(sqrt(pow((0-this->x),2)+pow((0-this->y),2)));
    compare2=(float)(sqrt(pow((0-p.x),2)+pow((0-p.y),2)));
    if(compare1>compare2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Point::operator<(Point &q)
{
    float compare3,compare4;
    compare3=(float)(sqrt(pow((0-this->x),2)+pow((0-this->y),2)));
    compare4=(float)(sqrt(pow((0-q.x),2)+pow((0-q.y),2)));
    if(compare3<compare4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Point::operator==(Point &r)
{
    float compare5,compare6;
    compare5=(float)(sqrt(pow((0-this->x),2)+pow((0-this->y),2)));
    compare6=(float)(sqrt(pow((0-r.x),2)+pow((0-r.y),2)));
    if(compare5==compare6)
    {
        return true;
    }
    else
    {
        return false;
    }
}

#include<iostream>
#include<math.h>
#include"point.h"
using namespace std;
point::point():
    m_x(0),m_y(0){}
point::point(int m_x,int m_y):
    m_x(m_x),m_y(m_y){}
point::point(const point & refer):
    m_x(refer.m_x),m_y(refer.m_y){}
int point::distanceFromOrigin()
{
    int distance;
    distance=sqrt((m_x*m_x)+(m_y*m_y));
    return distance;
}
int point::isOrigin()
{
    if(m_x==0&&m_y==0)
        return 1;
    else
        return 0;
}
int point::isOnXAxis()
{
    if(m_x!=0&&m_y==0)
        return 1;
    else
        return 0;
}
int point::isOnYAxis()
{
    if(m_x==0&&m_y!=0)
        return 1;
    else
        return 0;
}
int point::quadrant()
{
    if(m_x>0&&m_y>0)
        return First;
    if(m_x<0&&m_y>0)
        return Second;
    if(m_x<0&&m_y<0)
        return Third;
    if(m_x>0&&m_y<0)
        return Fourth;
}
int point::getx()
{
    return m_x;
}
int point::gety()
{
    return m_y;
}
void point::display()
{
    cout<<m_x<<","<<m_y;
}


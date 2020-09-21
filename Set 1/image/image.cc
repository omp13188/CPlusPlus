#include<iostream>
#include"image.h"
using namespace std;
image::image():
    m_x(0),m_y(0),m_width(0),m_height(0){}
image::image(int m_x,int m_y,int m_width,int m_height):
    m_x(m_x),m_y(m_y),m_width(m_width),m_height(m_height){}
image::image(const image & refer):
    m_x(refer.m_x),m_y(refer.m_y),m_width(refer.m_width),m_height(refer.m_height){}
void image::moveit(int new_x,int new_y)
{
    m_x=new_x;
    m_y=new_y;
}
void image::resizeit(int new_width,int new_height)
{
    m_width=new_width;
    m_height=new_height;
}
void image::scale(int s_factor)
{
    m_width=s_factor*m_width;
    m_height=s_factor*m_height;
}
int image::getx()
{
    return m_x;
}
int image::gety()
{
    return m_y;
}
int image::getwidth()
{
    return m_width;
}
int image::getheight()
{
    return m_height;
}
void image::display()
{
    cout<<m_x<<","<<m_y<<","<<m_width<<","<<m_height;
}

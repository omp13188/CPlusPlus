#include<iostream>
#include"Colour.h"
using namespace std;
colour::colour():
    m_r(0),m_g(0),m_b(0){}
colour::colour(int m_r,int m_g,int m_b):
    m_r(m_r),m_g(m_g),m_b(m_b){}
colour::colour(int m_r):
    m_r(m_r),m_g(m_r),m_b(m_r){}
colour::colour(const colour & refer):
    m_r(refer.m_r),m_g(refer.m_g),m_b(refer.m_b){}
int colour::invert()
{
    int res;
    m_r=255-m_r;
    m_g=255-m_g;
    m_b=255-m_b;
    res=(m_r*1000000)+(m_g*1000)+(m_b);
    return res;
}
void colour::display()
{
    cout<<m_r<<","<<m_g<<","<<m_b;
}
int colour::colour1()
{
    if(m_r==255&&m_g==0&&m_b==0)
        return red;
    if(m_r==0&&m_g==255&&m_b==0)
        return green;
    if(m_r==0&&m_g==0&&m_b==255)
        return blue;
    if(m_r==0&&m_g==0&&m_b==0)
        return black;
    if(m_r==255&&m_g==255&&m_b==255)
        return white;
}
int colour::getrcolour()
{
    return m_r;
}
int colour::getgcolour()
{
    return m_g;
}
int colour::getbcolour()
{
    return m_b;
}

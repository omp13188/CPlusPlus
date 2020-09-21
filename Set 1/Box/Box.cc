#include<iostream>
#include"Box.h"
using namespace std;
box::box():
    length(0),breadth(0),height(0){}
box::box(int length,int breadth,int height):
    length(length),breadth(breadth),height(height){}
box::box(const box & refer):
    length(refer.length),breadth(refer.breadth),height(refer.height){}
int box::getlength()
{
    return length;
}
int box::getbreadth()
{
    return breadth;
}
int box::getheight()
{
    return height;
}
int box::getvolume()
{
    volume=length*breadth*height;
}
void box::display()
{
    cout<<length<<","<<breadth<<","<<height;
}

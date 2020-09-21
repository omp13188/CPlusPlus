#include<iostream>
#include"distance.h"
Distance::Distance() :
    m_feets(0),m_inches(0) {

}
Distance::Distance(int m_feets , int m_inches ) :
    m_feets(m_feets),m_inches(m_inches){}
Distance::Distance(int m_feets ) :
    m_feets(m_feets),m_inches(m_feets){}
int Distance::getfeet() {
  return m_feets;
}
int Distance::getinch() {
  return m_inches;
}
 Distance Distance:: operator+(const Distance& op2)
  {
      Distance temp;
      temp.m_feets=op2.m_feets+m_feets;
      temp.m_inches=op2.m_inches+m_inches;
      temp.m_feets=temp.m_feets+(temp.m_inches/12);
      temp.m_inches=temp.m_inches%12;
      return temp;
  }
 Distance Distance:: operator-(const Distance& op2)
  {
      Distance temp;
      temp.m_feets=m_feets-op2.m_feets;
      temp.m_inches=m_inches-op2.m_inches;
      temp.m_feets=temp.m_feets+(temp.m_inches/12);
      temp.m_inches=temp.m_inches%12;
      return temp;
  }
Distance Distance:: operator+(int num)
{
    Distance temp;
    temp.m_feets=m_feets+num;
      temp.m_feets=temp.m_feets+(m_inches/12);
      temp.m_inches=m_inches%12;
    return temp;
}
Distance Distance:: operator-(int num)
{
    Distance temp;
    temp.m_feets=m_feets-num;
      temp.m_feets=temp.m_feets+(m_inches/12);
      temp.m_inches=m_inches%12;
    return temp;
}
 Distance& Distance:: operator++()
  {
      m_feets++;
      m_feets=m_feets+(m_inches/12);
      m_inches=m_inches%12;
      return *this;
  }
 Distance Distance:: operator++(int num)
  {
      m_feets++;
      m_feets=m_feets+(m_inches/12);
      m_inches=m_inches%12;
      return *this;
  }
  bool Distance:: operator==(const Distance& op2)
  {
      if((op2.m_feets==m_feets)&&(op2.m_inches==m_inches))
        return true;
      else
        return false;
  }
  bool Distance:: operator>(const Distance& op2)
  {
      if((m_feets*12+m_inches)>(op2.m_feets*12+op2.m_inches))
        return true;
      else
        return false;
  }
  bool Distance:: operator<(const Distance& op2)
  {
      if((m_feets*12+m_inches)<(op2.m_feets*12+op2.m_inches))
        return true;
      else
        return false;
  }
void Distance::display() {
    std::cout << m_feets<<","<<m_inches <<"\n";
}




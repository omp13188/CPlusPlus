#include<iostream>
#include"mytime.h"
MyTime::MyTime() :
    m_hours(0),m_minutes(0),m_seconds(0) {

}
MyTime::MyTime(int m_hours , int m_minutes,int m_seconds ) :
    m_hours(m_hours),m_minutes(m_minutes),m_seconds(m_seconds){}
MyTime::MyTime(int m_minutes, int m_seconds ) :
    m_minutes(m_minutes),m_seconds(m_seconds){}
int MyTime::gethours() {
  return m_hours;
}
int MyTime::getminutes() {
  return m_minutes;
}
int MyTime::getseconds() {
  return m_seconds;
}
 MyTime MyTime:: operator+(const MyTime& op2)
  {
      MyTime temp;
      temp.m_minutes=op2.m_minutes+m_minutes;
      temp.m_hours=op2.m_hours+m_hours;
      temp.m_seconds=op2.m_seconds+m_seconds;
      temp.m_seconds=(temp.m_hours*3600)+(temp.m_minutes*60)+temp.m_seconds;
      temp.m_hours=temp.m_seconds/3600;
      temp.m_minutes=((temp.m_seconds%3600)/60);
      temp.m_seconds=temp.m_seconds%60;
      return temp;
  }
 MyTime MyTime:: operator-(const MyTime& op2)
  {
      MyTime temp;
      temp.m_hours=m_hours-op2.m_hours;
      temp.m_minutes=m_minutes-op2.m_minutes;
      temp.m_seconds=m_seconds-op2.m_seconds;
      temp.m_seconds=(temp.m_hours*3600)+(temp.m_minutes*60)+temp.m_seconds;
      temp.m_hours=temp.m_seconds/3600;
      temp.m_minutes=((temp.m_seconds%3600)/60);
      temp.m_seconds=temp.m_seconds%60;
      return temp;
  }
MyTime MyTime:: operator+(int num)
{
    MyTime temp;
    temp.m_hours=m_hours+num;
      temp.m_seconds=(temp.m_hours*3600)+(m_minutes*60)+m_seconds;
      temp.m_hours=temp.m_seconds/3600;
      temp.m_minutes=((temp.m_seconds%3600)/60);
      temp.m_seconds=temp.m_seconds%60;
    return temp;
}
MyTime MyTime:: operator-(int num)
{
    MyTime temp;
    temp.m_hours=m_hours-num;
      temp.m_seconds=(temp.m_hours*3600)+(m_minutes*60)+m_seconds;
      temp.m_hours=temp.m_seconds/3600;
      temp.m_minutes=((temp.m_seconds%3600)/60);
      temp.m_seconds=temp.m_seconds%60;
    return temp;
}
 MyTime& MyTime:: operator++()
  {
      m_hours++;
      m_seconds=(m_hours*3600)+(m_minutes*60)+m_seconds;
      m_hours=m_seconds/3600;
      m_minutes=((m_seconds%3600)/60);
      m_seconds=m_seconds%60;
      return *this;
  }
 MyTime MyTime:: operator++(int num)
  {
      m_hours++;
      m_seconds=(m_hours*3600)+(m_minutes*60)+m_seconds;
      m_hours=m_seconds/3600;
      m_minutes=((m_seconds%3600)/60);
      m_seconds=m_seconds%60;
      return *this;
  }
  MyTime MyTime:: operator+=(const MyTime& op2)
  {
      MyTime temp;
      temp.m_hours=op2.m_hours+m_hours;
      temp.m_minutes=op2.m_minutes+m_minutes;
      temp.m_seconds=op2.m_seconds+m_seconds;
      temp.m_seconds=(temp.m_hours*3600)+(temp.m_minutes*60)+temp.m_seconds;
      temp.m_hours=temp.m_seconds/3600;
      temp.m_minutes=((temp.m_seconds%3600)/60);
      temp.m_seconds=temp.m_seconds%60;
      return temp;
  }
  bool MyTime:: operator==(const MyTime& op2)
  {
      if((op2.m_hours==m_hours)&&(op2.m_minutes==m_minutes)&&(op2.m_seconds==m_seconds))
        return true;
      else
        return false;
  }
  bool MyTime:: operator>(const MyTime& op2)
  {
      if((m_hours*3600+m_minutes*60+m_seconds)>(op2.m_hours*3600+op2.m_minutes*60+op2.m_seconds))
        return true;
      else
        return false;
  }
  bool MyTime:: operator<(const MyTime& op2)
  {
      if((m_hours*3600+m_minutes*60+m_seconds)<(op2.m_hours*3600+op2.m_minutes*60+op2.m_seconds))
        return true;
      else
        return false;
  }
void MyTime::display() {
    std::cout << m_hours<<","<<m_minutes <<","<<m_seconds<<"\n";
}

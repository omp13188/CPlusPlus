#include<iostream>
#include<numeric>
#include<algorithm>
#include <bits/stdc++.h>
#include"fraction.h"
Fraction::Fraction() :
    m_numerator(0),m_denominator(0) {

}
Fraction::Fraction(int m_numerator , int m_denominator ) :
    m_numerator(m_numerator),m_denominator(m_denominator){}
Fraction::Fraction(int m_numerator ) :
    m_numerator(m_numerator),m_denominator(m_numerator){}
int Fraction::getnumerator() {
  return m_numerator;
}
int Fraction::getdenominator() {
  return m_denominator;
}
 Fraction Fraction:: operator+(const Fraction& op2)
  {
      Fraction temp;
      int t;
      temp.m_numerator=(op2.m_numerator*m_denominator)+(op2.m_denominator*m_numerator);
      temp.m_denominator=(op2.m_denominator*m_denominator);
      t=std::__gcd(temp.m_numerator,temp.m_denominator);
      temp.m_numerator=temp.m_numerator/t;
      temp.m_denominator=temp.m_denominator/t;
      return temp;
  }
 Fraction Fraction:: operator-(const Fraction& op2)
  {
      Fraction temp;
      int t;
      temp.m_numerator=(op2.m_numerator*m_denominator)-(op2.m_denominator*m_numerator);
      temp.m_denominator=op2.m_denominator*m_denominator;
      t=std::__gcd(temp.m_numerator,temp.m_denominator);
      temp.m_numerator=temp.m_numerator/t;
      temp.m_denominator=temp.m_denominator/t;
      return temp;
  }
 Fraction Fraction:: operator*(const Fraction& op2)
  {
      Fraction temp;
      int t;
      temp.m_numerator=op2.m_numerator*m_numerator;
      temp.m_denominator=op2.m_denominator*m_denominator;
      t=std::__gcd(temp.m_numerator,temp.m_denominator);
      temp.m_numerator=temp.m_numerator/t;
      temp.m_denominator=temp.m_denominator/t;
      return temp;
  }
Fraction Fraction:: operator+(int num)
{
    Fraction temp;
      int t;
      temp.m_numerator=(num*m_denominator)+(m_numerator);
      temp.m_denominator=m_denominator;
      t=std::__gcd(temp.m_numerator,temp.m_denominator);
      temp.m_numerator=temp.m_numerator/t;
      temp.m_denominator=temp.m_denominator/t;
    return temp;
}
Fraction Fraction:: operator-(int num)
{
    Fraction temp;
      int t;
      temp.m_numerator=(m_numerator)-(num*m_denominator);
      temp.m_denominator=m_denominator;
      t=std::__gcd(temp.m_numerator,temp.m_denominator);
      temp.m_numerator=temp.m_numerator/t;
      temp.m_denominator=temp.m_denominator/t;
    return temp;
}
Fraction Fraction::simplify()
{
    int t1;
          t1=std::__gcd(m_numerator,m_denominator);
    m_numerator=m_numerator/t1;
      m_denominator=m_denominator/t1;
}
  bool Fraction:: operator==(const Fraction& op2)
  {
      Fraction op3;
      int t1,t2;
      t1=std::__gcd(m_numerator,m_denominator);
      t2=std::__gcd(op2.m_numerator,op2.m_denominator);
      m_numerator=m_numerator/t1;
      m_denominator=m_denominator/t1;
      op3.m_numerator=op2.m_numerator/t2;
      op3.m_denominator=op2.m_denominator/t2;
      if((op3.m_numerator==m_numerator)&&(op3.m_denominator==m_denominator))
        return true;
      else
        return false;
  }
  bool Fraction:: isSimplest()
  {
      int t;
      Fraction op2;
      op2.m_numerator=m_numerator;
      op2.m_denominator=m_denominator;
      t=std::__gcd(m_numerator,m_denominator);
      m_numerator=m_numerator/t;
      m_denominator=m_denominator/t;
      if((op2.m_numerator==m_numerator)&&(op2.m_denominator==m_denominator))
        return true;
      else
        return false;
  }
  bool Fraction:: operator>(const Fraction& op2)
  {
      if((m_numerator/m_denominator)>(op2.m_numerator/op2.m_denominator))
        return true;
      else
        return false;
  }
  bool Fraction:: operator<(const Fraction& op2)
  {
      if((m_numerator/m_denominator)<(op2.m_numerator+op2.m_denominator))
        return true;
      else
        return false;
  }
void Fraction::display() {
    std::cout << m_numerator<<","<<m_denominator <<"\n";
}




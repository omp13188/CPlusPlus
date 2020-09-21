#include<iostream>
#include"complex.h"
ComplexNum::ComplexNum() :
    m_real(0),m_imag(0) {

}
ComplexNum::ComplexNum(int m_real , int m_imag ) :
    m_real(m_real),m_imag(m_imag){}
ComplexNum::ComplexNum(int m_real ) :
    m_real(m_real),m_imag(m_real){}
int ComplexNum::getreal() {
  return m_real;
}
int ComplexNum::getimag() {
  return m_imag;
}
 ComplexNum ComplexNum:: operator+(const ComplexNum& op2)
  {
      ComplexNum temp;
      temp.m_real=op2.m_real+m_real;
      temp.m_imag=op2.m_imag+m_imag;
      return temp;
  }
 ComplexNum ComplexNum:: operator-(const ComplexNum& op2)
  {
      ComplexNum temp;
      temp.m_real=m_real-op2.m_real;
      temp.m_imag=m_imag-op2.m_imag;
      return temp;
  }
 ComplexNum ComplexNum:: operator*(const ComplexNum& op2)
  {
      ComplexNum temp;
      temp.m_real=op2.m_real*m_real;
      temp.m_imag=op2.m_imag*m_imag;
      return temp;
  }
 ComplexNum& ComplexNum:: operator++()
  {
      m_real++;
      m_imag++;
      return *this;
  }
 ComplexNum ComplexNum:: operator++(int num)
  {
        ComplexNum temp;
        temp.m_real=++m_real;
        temp.m_imag=++m_imag;
      return temp;
  }
  bool ComplexNum:: operator==(const ComplexNum& op2)
  {
      if((op2.m_real==m_real)&&(op2.m_imag==m_imag))
        return true;
      else
        return false;
  }
void ComplexNum::display() {
    std::cout << m_real<<","<<m_imag <<"\n";
}


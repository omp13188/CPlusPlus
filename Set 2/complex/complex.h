#ifndef __COMPLEX_H
#define __COMPLEX_H

class ComplexNum {
  int m_real;
  int m_imag;
  public:
  ComplexNum();
  ComplexNum(int,int);
  ComplexNum(int);
  ComplexNum operator+(const ComplexNum&);
  ComplexNum operator-(const ComplexNum&);
  ComplexNum operator*(const ComplexNum&);
  ComplexNum& operator++();
  ComplexNum operator++(int);
  bool operator==(const ComplexNum&);
  int getreal();
  int getimag();
  void display();
};

#endif

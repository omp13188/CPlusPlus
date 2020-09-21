#ifndef __FRACTION_H
#define __FRACTION_H

class Fraction {
  int m_numerator;
  int m_denominator;
  public:
  Fraction();
  Fraction(int,int);
  Fraction(int);
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator+(int);
  Fraction operator-(int);
  int getnumerator();
  int getdenominator();
  bool operator==(const Fraction&);
  bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  Fraction simplify();
  bool isSimplest();
  void display();
};

#endif


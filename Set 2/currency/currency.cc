#include<iostream>
#include"currency.h"
Currency::Currency() :
    m_rupees(0),m_paise(0) {

}
Currency::Currency(int m_rupees , int m_paise ) :
    m_rupees(m_rupees),m_paise(m_paise){}
Currency::Currency(int m_rupees ) :
    m_rupees(m_rupees),m_paise(m_rupees){}
int Currency::getrupees() {
  return m_rupees;
}
int Currency::getpaise() {
  return m_paise;
}
 Currency Currency:: operator+(const Currency& op2)
  {
      Currency temp;
      temp.m_rupees=op2.m_rupees+m_rupees;
      temp.m_paise=op2.m_paise+m_paise;
      temp.m_rupees=temp.m_rupees+(temp.m_paise/100);
      temp.m_paise=temp.m_paise%100;
      return temp;
  }
 Currency Currency:: operator-(const Currency& op2)
  {
      Currency temp;
      temp.m_rupees=m_rupees-op2.m_rupees;
      temp.m_paise=m_paise-op2.m_paise;
      temp.m_rupees=temp.m_rupees+(temp.m_paise/100);
      temp.m_paise=temp.m_paise%100;
      return temp;
  }
Currency Currency:: operator+(int num)
{
    Currency temp;
    temp.m_rupees=m_rupees+num;
      temp.m_rupees=temp.m_rupees+(m_paise/100);
      temp.m_paise=m_paise%100;
    return temp;
}
Currency Currency:: operator-(int num)
{
    Currency temp;
    temp.m_rupees=m_rupees-num;
      temp.m_rupees=temp.m_rupees+(m_paise/100);
      temp.m_paise=m_paise%100;
    return temp;
}
 Currency& Currency:: operator++()
  {
      m_rupees++;
      m_rupees=m_rupees+(m_paise/100);
      m_paise=m_paise%100;
      return *this;
  }
 Currency Currency:: operator++(int num)
  {
      m_rupees++;
      m_rupees=m_rupees+(m_paise/100);
      m_paise=m_paise%100;
      return *this;
  }
  bool Currency:: operator==(const Currency& op2)
  {
      if((op2.m_rupees==m_rupees)&&(op2.m_paise==m_paise))
        return true;
      else
        return false;
  }
  bool Currency:: operator>(const Currency& op2)
  {
      if((m_rupees*100+m_paise)>(op2.m_rupees*100+op2.m_paise))
        return true;
      else
        return false;
  }
  bool Currency:: operator<(const Currency& op2)
  {
      if((m_rupees*100+m_paise)<(op2.m_rupees*100+op2.m_paise))
        return true;
      else
        return false;
  }
void Currency::display() {
    std::cout << m_rupees<<","<<m_paise <<"\n";
}



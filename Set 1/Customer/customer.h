#ifndef __CUSTOMER_H_
#define __CUSTOMER_H_
#include<string>
  enum AccountType{Prepaid,Postpaid};
class customer {
  int m_type;
  int m_custId;
  std::string m_custName;
  std::string m_phone;
  double m_balance;
public:
  customer();
  customer(int, int,std::string,std::string, double);
  customer(const customer &);
  void credit(double);
  void makeCall(double);
  int getcustId();
  int getType();
  std::string getcustName();
  std::string getPhone();
  double getBalance();
  void display();
};
#endif

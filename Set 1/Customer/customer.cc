#include<iostream>
#include "customer.h"
customer::customer() :
    m_type(Prepaid),m_custId(0), m_custName("No Name"),m_phone("No Number"), m_balance(0) {

}
customer::customer(int m_type , int custId , std::string name , std::string phone , double bal) :
    m_type(m_type),m_custId(custId), m_custName(name),m_phone(phone), m_balance(bal){}
customer::customer(const customer & ref) :
  m_type(ref.m_type),m_custId(ref.m_custId), m_custName(ref.m_custName),m_phone(ref.m_phone), m_balance(ref.m_balance) {

}
void customer::credit(double amount) {
  m_balance += amount;
}
void customer::makeCall(double amount)
{
    if (m_type==0)
    {
        if (m_balance==0)
        {
            amount=0;
        }
    }
    m_balance-=amount;
}
int customer::getcustId()
{
  return m_custId;
}
int customer::getType() {
  return m_type;
}
std::string customer::getcustName() {
  return m_custName;
}
std::string customer::getPhone()
{
    return m_phone;
}
double customer::getBalance(){
    return m_balance;
}
void customer::display() {
    std::cout << m_type<<","<<m_custId << "," << m_custName << ","<<m_phone<<","<< m_balance << "\n";
}


#ifndef __IPADDRESS_H
#define __IPADDRESS_H

#include<string>

enum IPClass {
  A,
  B,
  C,
  D
};

class IPAddress {
  uint64_t ipval;
  std::string ipval1;
  public:
  IPAddress();
  IPAddress(int,int,int,int);   //a,b,c,d vals
  IPAddress(std::string);                       //"a.b.c.d" format
  int isLoopBack();
  IPClass getIPClass();
  uint64_t getIPVal();
  void display();
};

#endif

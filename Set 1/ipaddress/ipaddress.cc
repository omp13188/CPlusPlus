#include<iostream>
#include<math.h>
#include"IPAddress.h"
using namespace std;
IPAddress::IPAddress():
    ipval(0){}
IPAddress::IPAddress(int ipval1,int ipval2,int ipval3,int ipval4)
{
    ipval=(ipval1*1000000000)+(ipval2*1000000)+(ipval3*1000)+ipval4;
}
IPAddress::IPAddress(std::string ipval1):
    ipval1(ipval1){}
int IPAddress::isLoopBack()
{
    if(ipval==127000000001)
        return 1;
    else
        return 0;
}
uint64_t IPAddress::getIPVal()
{
    return ipval;
}
IPClass IPAddress::getIPClass()
{
    int temp;
    temp=ipval/1000000000;
    if(temp>=0&&temp<128)
        return A;
    if(temp>=128&&temp<192)
        return B;
    if(temp>=192&&temp<224)
        return C;
    if(temp>=224&&temp<240)
        return D;
}
void IPAddress::display()
{
    cout<<ipval;
}




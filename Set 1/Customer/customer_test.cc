#include "customer.h"
#include "gtest/gtest.h"
using namespace std;
TEST(customer,DefaultConstructor) {
    customer a1;
    EXPECT_EQ(0.0,a1.getBalance());
    EXPECT_EQ(0.0,a1.getcustId());
    EXPECT_EQ(Prepaid,a1.getType());
    EXPECT_EQ("No Name",a1.getcustName());
    EXPECT_EQ("No Number",a1.getPhone());
}
TEST(customer,ParameterizedConstructor) {
    customer a1(Postpaid,1000,"Lippman","9611044790",5000.0);
    EXPECT_EQ(Postpaid,a1.getType());
    EXPECT_EQ(1000,a1.getcustId());
    EXPECT_STREQ("Lippman",a1.getcustName().c_str());
    EXPECT_STREQ("9611044790",a1.getPhone().c_str());
    EXPECT_EQ(5000.0,a1.getBalance());

}
TEST(customer,CopyConstructor) {
    customer a1(Postpaid,1000,"Lippman","9611044790",5000.0);
    customer a2(a1);
    EXPECT_EQ(Postpaid,a2.getType());
    EXPECT_EQ(1000,a2.getcustId());
    EXPECT_STREQ("Lippman",a2.getcustName().c_str());
    EXPECT_STREQ("9611044790",a2.getPhone().c_str());
    EXPECT_EQ(5000.0,a2.getBalance());

}
TEST(customer,CreditTest) {
    customer a1(Prepaid,1000,"Lippman","9611044790",5000.0);
    a1.credit(3000);
    EXPECT_EQ(8000.0,a1.getBalance());

}
TEST(customer,MakeCallTest) {
    customer a1(Prepaid,1000,"Lippman","9611044790",5000.0);
    a1.makeCall(1200);
    EXPECT_EQ(3800.0,a1.getBalance());
}



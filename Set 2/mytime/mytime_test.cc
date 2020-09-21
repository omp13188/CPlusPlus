#include "mytime.h"
#include "gtest/gtest.h"
using namespace std;
TEST(MyTime,DefaultConstructor) {
    MyTime a1;
    EXPECT_EQ(0.0,a1.gethours());
    EXPECT_EQ(0.0,a1.getminutes());
    EXPECT_EQ(0.0,a1.getseconds());
}
TEST(MyTime,ParameterizedConstructor) {
    MyTime a1(12,5,30);
    EXPECT_EQ(12,a1.gethours());
    EXPECT_EQ(5,a1.getminutes());
    EXPECT_EQ(30,a1.getseconds());
}
TEST(MyTime,AddTest) {
    MyTime a1(12,45,70);
    MyTime b1(7,15,45);
    MyTime c1=a1+b1;
    EXPECT_EQ(20,c1.gethours());
    EXPECT_EQ(1,c1.getminutes());
    EXPECT_EQ(55,c1.getseconds());
}
TEST(MyTime,ShortHandAddTest) {
    MyTime a1(12,45,70);
    MyTime b1(7,15,45);
    MyTime c1=(b1+=a1);
    EXPECT_EQ(20,c1.gethours());
    EXPECT_EQ(1,c1.getminutes());
    EXPECT_EQ(55,c1.getseconds());
}
TEST(MyTime,SubTest) {
    MyTime a1(12,15,220);
    MyTime b1(7,1,15);
    MyTime c1;
    c1=a1-b1;
    EXPECT_EQ(5,c1.gethours());
    EXPECT_EQ(17,c1.getminutes());
    EXPECT_EQ(25,c1.getseconds());
}
TEST(MyTime,AddIntTest) {
    MyTime a1(12,25,13);
    MyTime c1=a1+15;
    EXPECT_EQ(27,c1.gethours());
    EXPECT_EQ(25,c1.getminutes());
    EXPECT_EQ(13,c1.getseconds());
}
TEST(MyTime,SubIntTest) {
    MyTime a1(12,75,13);
    MyTime c1;
    c1=a1-7;
    EXPECT_EQ(6,c1.gethours());
    EXPECT_EQ(15,c1.getminutes());
    EXPECT_EQ(13,c1.getseconds());
}
TEST(MyTime,PreIncTest) {
    MyTime a1(12,82,90);
    MyTime c1;
    c1=++a1;
    EXPECT_EQ(14,c1.gethours());
    EXPECT_EQ(23,c1.getminutes());
    EXPECT_EQ(30,c1.getseconds());
}
TEST(MyTime,PostIncTest) {
    MyTime a1(12,83,94);
    MyTime c1=a1++;
    EXPECT_EQ(14,c1.gethours());
    EXPECT_EQ(24,c1.getminutes());
    EXPECT_EQ(34,c1.getseconds());
}
TEST(MyTime,IsEqualTest) {
    MyTime a1(12,5,90);
    MyTime b1(12,5,90);
    EXPECT_EQ(true,a1==b1);
}
TEST(MyTime,IsGreaterTest) {
    MyTime a1(24,5,155);
    MyTime b1(24,5,154);
    EXPECT_EQ(true,a1>b1);
}
TEST(MyTime,IsLesserTest) {
    MyTime a1(13,5,167);
    MyTime b1(13,5,168);
    EXPECT_EQ(true,a1<b1);
}



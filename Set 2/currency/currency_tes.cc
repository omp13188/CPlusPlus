#include "currency.h"
#include "gtest/gtest.h"
using namespace std;
TEST(Currency,DefaultConstructor) {
    Currency a1;
    EXPECT_EQ(0.0,a1.getrupees());
    EXPECT_EQ(0.0,a1.getpaise());
}
TEST(Currency,ParameterizedConstructor) {
    Currency a1(12,5);
    EXPECT_EQ(12,a1.getrupees());
    EXPECT_EQ(5,a1.getpaise());
}
TEST(Currency,AddTest) {
    Currency a1(12,225);
    Currency b1(7,15);
    Currency c1;
    c1=a1+b1;
    EXPECT_EQ(21,c1.getrupees());
    EXPECT_EQ(40,c1.getpaise());
}
TEST(Currency,SubTest) {
    Currency a1(12,45);
    Currency b1(7,1);
    Currency c1;
    c1=a1-b1;
    EXPECT_EQ(5,c1.getrupees());
    EXPECT_EQ(44,c1.getpaise());
}
TEST(Currency,AddIntTest) {
    Currency a1(12,225);
    Currency c1;
    c1=a1+15;
    EXPECT_EQ(29,c1.getrupees());
    EXPECT_EQ(25,c1.getpaise());
}
TEST(Currency,SubIntTest) {
    Currency a1(12,45);
    Currency c1;
    c1=a1-7;
    EXPECT_EQ(5,c1.getrupees());
    EXPECT_EQ(45,c1.getpaise());
}
TEST(Currency,PreIncTest) {
    Currency a1(12,100);
    Currency c1;
    c1=++a1;
    EXPECT_EQ(14,c1.getrupees());
    EXPECT_EQ(0,c1.getpaise());
}
TEST(Currency,PostIncTest) {
    Currency a1(12,5);
    Currency c1=a1++;
    EXPECT_EQ(13,c1.getrupees());
    EXPECT_EQ(5,c1.getpaise());
}
TEST(Currency,IsEqualTest) {
    Currency a1(12,5);
    Currency b1(12,5);
    EXPECT_EQ(true,a1==b1);
}
TEST(Currency,IsGreaterTest) {
    Currency a1(24,5);
    Currency b1(13,5);
    EXPECT_EQ(true,a1>b1);
}
TEST(Currency,IsLesserTest) {
    Currency a1(4,5);
    Currency b1(13,5);
    EXPECT_EQ(true,a1<b1);
}

#include "complex.h"
#include "gtest/gtest.h"
using namespace std;
TEST(ComplexNum,DefaultConstructor) {
    ComplexNum a1;
    EXPECT_EQ(0.0,a1.getreal());
    EXPECT_EQ(0.0,a1.getimag());
}
TEST(ComplexNum,ParameterizedConstructor) {
    ComplexNum a1(12,5);
    EXPECT_EQ(12,a1.getreal());
    EXPECT_EQ(5,a1.getimag());
}
TEST(ComplexNum,AddTest) {
    ComplexNum a1(12,5);
    ComplexNum b1(7,15);
    ComplexNum c1;
    c1=a1+b1;
    EXPECT_EQ(19,c1.getreal());
    EXPECT_EQ(20,c1.getimag());
}
TEST(ComplexNum,SubTest) {
    ComplexNum a1(12,5);
    ComplexNum b1(7,1);
    ComplexNum c1;
    c1=a1-b1;
    EXPECT_EQ(5,c1.getreal());
    EXPECT_EQ(4,c1.getimag());
}
TEST(ComplexNum,MulTest) {
    ComplexNum a1(2,5);
    ComplexNum b1(7,1);
    ComplexNum c1;
    c1=a1*b1;
    EXPECT_EQ(14,c1.getreal());
    EXPECT_EQ(5,c1.getimag());
}
TEST(ComplexNum,PreIncTest) {
    ComplexNum a1(12,5);
    ComplexNum c1;
    c1=++a1;
    EXPECT_EQ(13,c1.getreal());
    EXPECT_EQ(6,c1.getimag());
}
TEST(ComplexNum,PostIncTest) {
    ComplexNum a1(12,5);
    ComplexNum c1=a1++;
    EXPECT_EQ(13,c1.getreal());
    EXPECT_EQ(6,c1.getimag());
}
TEST(ComplexNum,IsEqualTest) {
    ComplexNum a1(12,5);
    ComplexNum b1(12,5);
    EXPECT_EQ(true,a1==b1);
}

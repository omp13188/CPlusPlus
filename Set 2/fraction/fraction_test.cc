#include "fraction.h"
#include "gtest/gtest.h"
using namespace std;
TEST(Fraction,DefaultConstructor) {
    Fraction a1;
    EXPECT_EQ(0.0,a1.getnumerator());
    EXPECT_EQ(0.0,a1.getdenominator());
}
TEST(Fraction,ParameterizedConstructor) {
    Fraction a1(12,5);
    EXPECT_EQ(12,a1.getnumerator());
    EXPECT_EQ(5,a1.getdenominator());
}
TEST(Fraction,AddTest) {
    Fraction a1(2,3);
    Fraction b1(1,2);
    Fraction c1;
    c1=a1+b1;
    EXPECT_EQ(7,c1.getnumerator());
    EXPECT_EQ(6,c1.getdenominator());
}
TEST(Fraction,SubTest) {
    Fraction a1(1,3);
    Fraction b1(3,2);
    Fraction c1;
    c1=a1-b1;
    EXPECT_EQ(7,c1.getnumerator());
    EXPECT_EQ(6,c1.getdenominator());
}
TEST(Fraction,MulTest) {
    Fraction a1(3,2);
    Fraction b1(1,3);
    Fraction c1;
    c1=a1*b1;
    EXPECT_EQ(1,c1.getnumerator());
    EXPECT_EQ(2,c1.getdenominator());
}
TEST(Fraction,AddIntTest) {
    Fraction a1(2,3);
    Fraction c1;
    c1=a1+2;
    EXPECT_EQ(8,c1.getnumerator());
    EXPECT_EQ(3,c1.getdenominator());
}
TEST(Fraction,SubIntTest) {
    Fraction a1(8,3);
    Fraction c1;
    c1=a1-1;
    EXPECT_EQ(5,c1.getnumerator());
    EXPECT_EQ(3,c1.getdenominator());
}
TEST(Fraction,IsEqualTest) {
    Fraction a1(12,5);
    Fraction b1(12,5);
    EXPECT_EQ(true,a1==b1);
}
TEST(Fraction,IsGreaterTest) {
    Fraction a1(24,5);
    Fraction b1(13,5);
    EXPECT_EQ(true,a1>b1);
}
TEST(Fraction,IsLesserTest) {
    Fraction a1(4,5);
    Fraction b1(13,5);
    EXPECT_EQ(true,a1<b1);
}
TEST(Fraction,SimplifyTest) {
    Fraction a1(16,10);
    a1.simplify();
    EXPECT_EQ(8,a1.getnumerator());
    EXPECT_EQ(5,a1.getdenominator());
}
TEST(Fraction,IsSimpleTest) {
    Fraction a1(16,10);
    EXPECT_EQ(false,a1.isSimplest());
}

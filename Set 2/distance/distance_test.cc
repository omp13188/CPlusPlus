#include "distance.h"
#include "gtest/gtest.h"
using namespace std;
TEST(Distance,DefaultConstructor) {
    Distance a1;
    EXPECT_EQ(0.0,a1.getfeet());
    EXPECT_EQ(0.0,a1.getinch());
}
TEST(Distance,ParameterizedConstructor) {
    Distance a1(12,5);
    EXPECT_EQ(12,a1.getfeet());
    EXPECT_EQ(5,a1.getinch());
}
TEST(Distance,AddTest) {
    Distance a1(12,25);
    Distance b1(7,15);
    Distance c1;
    c1=a1+b1;
    EXPECT_EQ(22,c1.getfeet());
    EXPECT_EQ(4,c1.getinch());
}
TEST(Distance,SubTest) {
    Distance a1(12,15);
    Distance b1(7,1);
    Distance c1;
    c1=a1-b1;
    EXPECT_EQ(6,c1.getfeet());
    EXPECT_EQ(2,c1.getinch());
}
TEST(Distance,AddIntTest) {
    Distance a1(12,25);
    Distance c1;
    c1=a1+15;
    EXPECT_EQ(29,c1.getfeet());
    EXPECT_EQ(1,c1.getinch());
}
TEST(Distance,SubIntTest) {
    Distance a1(12,15);
    Distance c1;
    c1=a1-7;
    EXPECT_EQ(6,c1.getfeet());
    EXPECT_EQ(3,c1.getinch());
}
TEST(Distance,PreIncTest) {
    Distance a1(12,12);
    Distance c1;
    c1=++a1;
    EXPECT_EQ(14,c1.getfeet());
    EXPECT_EQ(0,c1.getinch());
}
TEST(Distance,PostIncTest) {
    Distance a1(12,13);
    Distance c1=a1++;
    EXPECT_EQ(14,c1.getfeet());
    EXPECT_EQ(1,c1.getinch());
}
TEST(Distance,IsEqualTest) {
    Distance a1(12,5);
    Distance b1(12,5);
    EXPECT_EQ(true,a1==b1);
}
TEST(Distance,IsGreaterTest) {
    Distance a1(24,5);
    Distance b1(13,5);
    EXPECT_EQ(true,a1>b1);
}
TEST(Distance,IsLesserTest) {
    Distance a1(4,5);
    Distance b1(13,5);
    EXPECT_EQ(true,a1<b1);
}


#include<math.h>
#include<gtest/gtest.h>
#include"point.h"
namespace{
TEST(point,DefaultConstructor)
{
    point b;
    EXPECT_EQ(0,b.getx());
    EXPECT_EQ(0,b.gety());
}
TEST(point,ParameterizedConstructor)
{
    point b(-45,20);
    EXPECT_EQ(-45,b.getx());
    EXPECT_EQ(20,b.gety());
}
TEST(point,CopyConstructor)
{
    point b(23,-12);
    point c(b);
    EXPECT_EQ(23,c.getx());
    EXPECT_EQ(-12,c.gety());
}
TEST(point,distanceFromOriginTest)
{
    point b(-19,41);
    EXPECT_EQ(45,(b.distanceFromOrigin()));
}
TEST(point,isOrigin)
{
    point b(0,0);
    EXPECT_EQ(1,b.isOrigin());
}
TEST(point,isOnXAxisTest)
{
    point b(-17,0);
    EXPECT_EQ(1,b.isOnXAxis());
}
TEST(point,isOnYAxisTest)
{
    point b(0,32);
    EXPECT_EQ(1,b.isOnYAxis());
}
TEST(point,EnumTest)
{
    point b(32,-2);
    EXPECT_EQ(Fourth,b.quadrant());
}
}

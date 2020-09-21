#include<gtest/gtest.h>
#include"Colour.h"
namespace{
TEST(colour,DefaultConstructor)
{
    colour b;
    EXPECT_EQ(0,b.getrcolour());
    EXPECT_EQ(0,b.getgcolour());
    EXPECT_EQ(0,b.getbcolour());
}
TEST(colour,ParameterizedConstructor)
{
    colour b(3,4,5);
    EXPECT_EQ(3,b.getrcolour());
    EXPECT_EQ(4,b.getgcolour());
    EXPECT_EQ(5,b.getbcolour());
}
TEST(colour,CopyConstructor)
{
    colour b(6,7,8);
    colour c(b);
    EXPECT_EQ(6,c.getrcolour());
    EXPECT_EQ(7,c.getgcolour());
    EXPECT_EQ(8,c.getbcolour());
}
TEST(colour,InvertTest)
{
    colour b(10,30,230);
    EXPECT_EQ(245225025,b.invert());
}
TEST(colour,EnumTest)
{
    colour b(255,255,255);
    EXPECT_EQ(white,b.colour1());
}
}


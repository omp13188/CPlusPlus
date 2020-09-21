#include<gtest/gtest.h>
#include"Box.h"
namespace{
TEST(box,DefaultConstructor)
{
    box b;
    EXPECT_EQ(0,b.getlength());
    EXPECT_EQ(0,b.getbreadth());
    EXPECT_EQ(0,b.getheight());
}
TEST(box,ParameterizedConstructor)
{
    box b(3,4,5);
    EXPECT_EQ(3,b.getlength());
    EXPECT_EQ(4,b.getbreadth());
    EXPECT_EQ(5,b.getheight());
}
TEST(box,CopyConstructor)
{
    box b(6,7,8);
    box c(b);
    EXPECT_EQ(6,c.getlength());
    EXPECT_EQ(7,c.getbreadth());
    EXPECT_EQ(8,c.getheight());
}
TEST(box,VolumeTest)
{
    box b(10,20,30);
    EXPECT_EQ(6000,b.getvolume());
}
}


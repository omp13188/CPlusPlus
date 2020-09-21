#include<gtest/gtest.h>
#include"image.h"
namespace{
TEST(image,DefaultConstructor)
{
    image b;
    EXPECT_EQ(0,b.getx());
    EXPECT_EQ(0,b.gety());
    EXPECT_EQ(0,b.getwidth());
    EXPECT_EQ(0,b.getheight());
}
TEST(image,ParameterizedConstructor)
{
    image b(0,0,480,640);
    EXPECT_EQ(0,b.getx());
    EXPECT_EQ(0,b.gety());
    EXPECT_EQ(480,b.getwidth());
    EXPECT_EQ(640,b.getheight());
}
TEST(image,CopyConstructor)
{
    image b(0,0,480,640);
    image c(b);
    EXPECT_EQ(0,c.getx());
    EXPECT_EQ(0,c.gety());
    EXPECT_EQ(480,c.getwidth());
    EXPECT_EQ(640,c.getheight());
}
TEST(image,MoveTest)
{
    image b(0,0,480,640);
    b.moveit(10,20);
    EXPECT_EQ(10,b.getx());
    EXPECT_EQ(20,b.gety());
}
TEST(image,ResizeitTest)
{
    image b(0,0,480,640);
    b.resizeit(400,600);
    EXPECT_EQ(400,b.getwidth());
    EXPECT_EQ(600,b.getheight());
}
TEST(image,ScaleTest)
{
    image b(0,0,540,960);
    b.scale(2);
    EXPECT_EQ(1080,b.getwidth());
    EXPECT_EQ(1920,b.getheight());
}
}

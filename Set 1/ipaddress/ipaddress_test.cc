#include<math.h>
#include<gtest/gtest.h>
#include"IPAddress.h"
namespace{
TEST(IPAddress,DefaultConstructor)
{
    IPAddress b;
    EXPECT_EQ(0,b.getIPVal());
}
TEST(IPAddress,ParameterizedConstructor)
{
    IPAddress b(2,0,78,234);
    EXPECT_EQ(2000078234,b.getIPVal());
}
TEST(IPAddress,isLoopBack)
{
    IPAddress b(1,234,8,211);
    EXPECT_EQ(0,b.isLoopBack());
}
TEST(IPAddress,EnumTest)
{
    IPAddress b(2,0,78,234);
    EXPECT_EQ(A,b.getIPClass());
}
}



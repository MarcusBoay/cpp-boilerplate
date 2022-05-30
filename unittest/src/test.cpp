#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "gmock/gmock-matchers.h"

TEST(DummyTest, MyTest) {
    EXPECT_TRUE(true);
    EXPECT_EQ(1024, 1024);
}

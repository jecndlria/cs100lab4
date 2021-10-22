#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(ConstructorTest, 1) {
    EXPECT_FALSE(false);
}
TEST(ConstructorTest, 2) {
    EXPECT_FALSE(false);
}
TEST(ConstructorTest, 3) {
    EXPECT_FALSE(false);
}

TEST(AreaTest, AreaEdgeCase) {
    Rectangle rect;
    rect.set_height(0);
    rect.set_width(0);
    ASSERT_EQ(rect.area(), 0);
}
TEST(AreaTest, AreaSingleton) {
    Rectangle rect;
    rect.set_height(1);
    rect.set_width(1);
    ASSERT_EQ(rect.area(), 1);
}
TEST(AreaTest, BigArea) {
    Rectangle rect(27425, 18271);
    rect.set_height(27425);
    rect.set_width(18271);
    ASSERT_EQ(rect.area(), 501082175);
}

TEST(PerimeterTest, PerimeterEdgeCase) {
    Rectangle rect;
    rect.set_height(0);
    rect.set_width(0);
    ASSERT_EQ(rect.perimeter(), 0);
}
TEST(PerimeterTest, PerimeterSingleton) {
    Rectangle rect;
    rect.set_height(1);
    rect.set_width(1);
    ASSERT_EQ(rect.perimeter(), 4);
}
TEST(PerimeterTest, BigPerimeter) {
    Rectangle rect;
    rect.set_height(6025);
    rect.set_width(4076);
    ASSERT_EQ(rect.perimeter(), 20202);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(ConstructorTest, WidthZeroUsingConstructorTest) {
  Rectangle *test_rect = new Rectangle(0,0);
  int expected_width =  0;
  ASSERT_EQ(expected_width, test_rect->get_width());
}

TEST(ConstructorTest, HeightZeroUsingConstructorTest) {
  Rectangle *test_rect = new Rectangle(0,0);
  int expected_height =  0;
  ASSERT_EQ(expected_height, test_rect->get_height());
}

TEST(ConstructorTest, WidthOneUsingConstructorTest) {
  Rectangle *test_rect = new Rectangle(1,1);
  int expected_width =  1;
  ASSERT_EQ(expected_width, test_rect->get_width());
}

TEST(ConstructorTest, HeightOneUsingConstructorTest) {
  Rectangle *test_rect = new Rectangle(1,1);
  int expected_height =  1;
  ASSERT_EQ(expected_height, test_rect->get_height());
}


TEST(ConstructorTest, LargeWidthUsingConstructorTest) {
  Rectangle *test_rect = new Rectangle(99,99);
  int expected_width =  99;
  ASSERT_EQ(expected_width, test_rect->get_width());
}

TEST(ConstructorTest, LargeHeightUsingConstructorTest) {
  Rectangle *test_rect = new Rectangle(99,99);
  int expected_height =  99;
  ASSERT_EQ(expected_height, test_rect->get_height());
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
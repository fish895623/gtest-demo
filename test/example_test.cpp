#include <gtest/gtest.h>

#include "example.h"

TEST(example, add) {
  double res;
  res = add_numbers(1.0, 2.0);
  ASSERT_NEAR(res, 3.0, 1.0e-11);
}

TEST(example, subtract) {
  double res;
  res = subtract_numbers(1.0, 2.0);
  ASSERT_NEAR(res, -1.0, 1.0e-11);
}

TEST(example, multiply) {
  double res = multiply_numbers(2, 2);
  ASSERT_EQ(res, 4);
}

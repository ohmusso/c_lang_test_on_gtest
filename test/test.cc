#include <gtest/gtest.h>
#include "count.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  int i = 0;

  i = count(i);

  // Expect equality.
  EXPECT_EQ(i, 1);
}

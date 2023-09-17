#include <gtest/gtest.h>
#include "action.h"

TEST(HackathonTests, BasicAssertion) {
    EXPECT_NEAR(4, 4, 1e-4);
}

TEST(HackathonTests, BasicAssertion2) {
  EXPECT_NEAR(5, 5, 1e-4);
}

TEST(ActionTest, PleaseWork) {
  Action action;
  float a = action.getBalance();
  bool b = action.buy(500);
  EXPECT_EQ(b,false);
  EXPECT_NEAR(a,0,1e-4);
}

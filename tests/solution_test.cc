#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(ReverseTest, HandlesValidStringInput) {
  Solution solution;
  string s="TEST";
  solution.StringReverse(s);
  string actual=s; 
  string expected="TSET";
  EXPECT_EQ(expected, actual);
}


TEST(ReverseTest, HandlesEmptyStringInput) {
  Solution solution;
  string s="";
  solution.StringReverse(s);
  string actual=s; 
  string expected="";
  EXPECT_EQ(expected, actual);
}
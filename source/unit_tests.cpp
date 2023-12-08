#include <gtest/gtest.h>
#include "my_funcs.h"

using namespace std;

TEST(counting, my_five) {
    Arithmetics ar1;
    EXPECT_EQ(5, ar1.five());
}

TEST(counting, my_six) {
    Arithmetics ar2;
    EXPECT_EQ(6, ar2.six());
}

TEST(counting, my_eleven) {
    Arithmetics ar3;
    EXPECT_EQ(11, ar3.eleven());
}
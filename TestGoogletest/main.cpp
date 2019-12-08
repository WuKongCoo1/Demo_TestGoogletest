//
//  main.cpp
//  TestGoogletest
//
//  Created by LINE Works on 2019/12/8.
//  Copyright © 2019 Jacky Walker. All rights reserved.
//

#include <iostream>
#include "gtest/gtest.h"
#include <numeric>
#include <vector>

int main(int argc, const char * argv[]) {
    ::testing::InitGoogleTest(&argc, (char **)argv);
    return RUN_ALL_TESTS();
}

TEST(TestSuiteName, TestName) {
    EXPECT_EQ(1, 1);
}

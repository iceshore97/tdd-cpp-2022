#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Team3Xx.h"

class XXTest: public testing::Test {

protected:

    void SetUp() override {
	}

    Team3Xx x;
};

TEST_F (XXTest, TestEmptyString){
    ASSERT_EQ(0, x.calculate(""));
}

TEST_F (XXTest, TestTwoNumberSum){
    ASSERT_EQ(3, x.calculate("1+2"));
}

TEST_F (XXTest, TestOneNumber){
    ASSERT_EQ(30, x.calculate("30"));
}

TEST_F (XXTest, TestTwoNumberMultiplication){
    ASSERT_EQ(6, x.calculate("3*2"));
}



//TEST_F (XXTest, TestTwoNumberSumWithSpacesInFront){
//    ASSERT_EQ(3, x.calculate(" 1+2"));
//    ASSERT_EQ(3, x.calculate("  1+2"));
//}

//TEST_F (XXTest, TestTwoNumberSumWithSpacesInBack){
//    ASSERT_EQ(3, x.calculate("1+2 "));
//    ASSERT_EQ(3, x.calculate("1+2  "));
//}

//TEST_F (XXTest, TestTwoNumberSumWithSpacesInBetween){
//    ASSERT_EQ(3, x.calculate("1 +2"));
//    ASSERT_EQ(3, x.calculate("1+ 2"));
//    ASSERT_EQ(3, x.calculate("1 + 2"));
//}

//
// Created by twer  on 4/21/15.
//

#ifndef FIZZBUZZWHIZZ_TESTCARSPEC_H
#define FIZZBUZZWHIZZ_TESTCARSPEC_H

#include "../lib/gtest/gtest.h"
class NumberOffGame;
class TestFizzBuzzWhizzSpec : public ::testing::Test{

public:
    virtual void SetUp();
    virtual void TearDown();

protected:
    std::shared_ptr<NumberOffGame> game;
};

#endif //FIZZBUZZWHIZZ_TESTCARSPEC_H

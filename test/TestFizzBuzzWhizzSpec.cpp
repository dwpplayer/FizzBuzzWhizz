//
// Created by twer  on 4/21/15.
//


#include "TestFizzBuzzWhizzSpec.h"
#include "../src/NumberOffGame.h"

void TestFizzBuzzWhizzSpec::TearDown() {
    Test::TearDown();
}


void TestFizzBuzzWhizzSpec::SetUp() {
    Test::SetUp();

    std::vector<int> vecSpecialDigits;
    vecSpecialDigits.push_back(3);
    vecSpecialDigits.push_back(5);
    vecSpecialDigits.push_back(7);

    game = std::make_shared<NumberOffGame>(vecSpecialDigits);
}


TEST_F(TestFizzBuzzWhizzSpec, ShouldInputThreeDifferentSpecialNumbers)
{
//    EXPECT_CALL(*mockLightSystem, LightOn()).Times(1);
//
//    car->Light();
}

TEST_F(TestFizzBuzzWhizzSpec, ShouldReturnFizzWhenTheNumberContainTheFirstDigit)
{
    ASSERT_EQ("Fizz", game->TurnNumber(13));
    ASSERT_EQ("Fizz", game->TurnNumber(35));
}

TEST_F(TestFizzBuzzWhizzSpec, ShouldReturnFizzWhenTheNumberIsMultipleTimesOfFirstDigit)
{
    ASSERT_EQ("Fizz", game->TurnNumber(12));
    ASSERT_EQ("Fizz", game->TurnNumber(18));
}

TEST_F(TestFizzBuzzWhizzSpec, ShouldReturnFizzWhenTheNumberIsMultipleTimesOfSecondDigit)
{
    ASSERT_EQ("Buzz", game->TurnNumber(10));
    ASSERT_EQ("Buzz", game->TurnNumber(100));
}


TEST_F(TestFizzBuzzWhizzSpec, ShouldReturnFizzWhenTheNumberIsMultipleTimesOfThirdDigit)
{
    ASSERT_EQ("Whizz", game->TurnNumber(49));
    ASSERT_EQ("Whizz", game->TurnNumber(14));
}


TEST_F(TestFizzBuzzWhizzSpec, ShouldReturnNumberWhenThenNumberIsNotRelationTotheSpecialDigits)
{
    ASSERT_EQ("1", game->TurnNumber(1));
    ASSERT_EQ("2", game->TurnNumber(2));
}

TEST_F(TestFizzBuzzWhizzSpec, ShouldReturnFizzBuzzWhenThenNumberIsMultipleOfSpecialDigitsFirstAndSecond)
{
    ASSERT_EQ("FizzBuzz", game->TurnNumber(15));
    ASSERT_EQ("FizzBuzz", game->TurnNumber(60));
}


TEST_F(TestFizzBuzzWhizzSpec, ShouldReturnFizzBuzzWhenThenNumberIsMultipleOfSpecialDigitsFirstAndThird)
{
    ASSERT_EQ("FizzWhizz", game->TurnNumber(21));
    ASSERT_EQ("FizzWhizz", game->TurnNumber(42));
}

TEST_F(TestFizzBuzzWhizzSpec, ShouldReturnFizzBuzzWhenThenNumberIsMultipleOfSpecialDigitsSecondAndThird)
{
    ASSERT_EQ("BuzzWhizz", game->TurnNumber(70));
    ASSERT_EQ("BuzzWhizz", game->TurnNumber(140));
}


TEST_F(TestFizzBuzzWhizzSpec, ShouldReturnFizzBuzzWhenThenNumberIsMultipleOfAllSpecialDigits)
{
    ASSERT_EQ("FizzBuzzWhizz", game->TurnNumber(210));
    ASSERT_EQ("FizzBuzzWhizz", game->TurnNumber(2100));
}
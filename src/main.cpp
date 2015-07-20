#include <iostream>
#include "../lib/gtest/gtest.h"
#include "../lib/gmock/gmock.h"
#include "NumberOffGame.h"

using namespace std;

//#define TEST_SWITCH

int main(int argc, char **argv) {
#ifdef TEST_SWITCH
    NumberOffGame game({3, 5, 7});
    std::cout << game.Run();
    return 0;
 #else
    testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
#endif
}
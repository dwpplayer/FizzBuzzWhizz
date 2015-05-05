//
// Created by twer  on 5/5/15.
//
#include <sstream>
#include "SpecialFizzNumberConverter.h"

std::string SpecialFizzNumberConverter::Convert(int nNumber) {
    int nNumberCopy = nNumber;
    while(nNumberCopy)
    {
        int nLastNumber = nNumberCopy % 10;
        if(nLastNumber == _specialDigits[0])
        {
            return "Fizz";
        }

        nNumberCopy /= 10;
    }

//    std::string strRet;
//    if(nNumber % _specialDigits[0] == 0)
//        strRet += "Fizz";
//    if(nNumber % _specialDigits[1] == 0)
//        strRet += "Buzz";
//    if(nNumber % _specialDigits[2] == 0)
////        strRet += "Whizz";
//    if(strRet.empty())
//    {
//        std::ostringstream os;
//        os << nNumber;
//        strRet = os.str();
//    }

    return "";
}

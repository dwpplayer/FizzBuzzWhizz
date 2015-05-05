//
// Created by twer  on 5/5/15.
//

#include "MultipleRelationOfNumberConverter.h"

std::string MultipleRelationOfNumberConverter::Convert(int nNumber) {
    std::string strRet;
    if(nNumber % _specialDigits[0] == 0)
        strRet += "Fizz";
    if(nNumber % _specialDigits[1] == 0)
        strRet += "Buzz";
    if(nNumber % _specialDigits[2] == 0)
        strRet += "Whizz";
    return strRet;
}

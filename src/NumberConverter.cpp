//
// Created by twer  on 5/5/15.
//

#include <string>
#include <sstream>
#include "NumberConverter.h"
#include "SpecialFizzNumberConverter.h"


std::vector<int> NumberConverter::_specialDigits;
void NumberConverter::SetSpecialDigits(std::vector<int> const &specialDigits) {
    _specialDigits = specialDigits;
}

std::string NumberConverter::TurnNumber(int nNumber)
{
    std::string strRet = Convert(nNumber);

    if(strRet.empty() && _nextConverter.get())
        strRet = _nextConverter->TurnNumber(nNumber);

    return strRet;
}

NumberConverter::NumberConverter() {
}

void NumberConverter::SetNextConverter(std::shared_ptr<NumberConverter> nextConverter) {
    _nextConverter = nextConverter;
}


//std::string NumberConverter::Convert(int nNumber) {
//    std::ostringstream os;
//    os << nNumber;
//    return os.str();
//}

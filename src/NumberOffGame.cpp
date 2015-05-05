//
// Created by twer  on 5/5/15.
//

#include <string>
#include <sstream>
#include "NumberOffGame.h"
#include "NumberConverter.h"
#include "SpecialFizzNumberConverter.h"
#include "MultipleRelationOfNumberConverter.h"
#include "GeneralNumberConverter.h"


NumberOffGame::NumberOffGame(const std::vector<int> &digits)
{
    _converter = std::make_shared<SpecialFizzNumberConverter>();
    _converter->SetSpecialDigits(digits);

    std::shared_ptr<MultipleRelationOfNumberConverter> multipleRelationOfNumberConveter = std::make_shared<MultipleRelationOfNumberConverter>();
    _converter->SetNextConverter(std::dynamic_pointer_cast<NumberConverter>(multipleRelationOfNumberConveter));

    std::shared_ptr<GeneralNumberConverter> generalNumberConverter = std::make_shared<GeneralNumberConverter>();
    multipleRelationOfNumberConveter->SetNextConverter(std::dynamic_pointer_cast<NumberConverter>(generalNumberConverter));
}


std::string NumberOffGame::Run() {
    std::string strRet;

    for(int i = 1; i < 100; ++i)
    {
        strRet += TurnNumber(i) + "\n";
    }
    return strRet;
}

std::string NumberOffGame::TurnNumber(int nNumber) {
    return _converter->TurnNumber(nNumber);
}

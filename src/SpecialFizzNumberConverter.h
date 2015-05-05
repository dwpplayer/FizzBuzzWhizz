//
// Created by twer  on 5/5/15.
//

#ifndef FIZZBUZZWHIZZ_SPECIALFIZZNUMBERCONVERTER_H
#define FIZZBUZZWHIZZ_SPECIALFIZZNUMBERCONVERTER_H


#include "NumberConverter.h"

class SpecialFizzNumberConverter
        : public NumberConverter {

protected:
    virtual std::string Convert(int nNumber);
};

#endif //FIZZBUZZWHIZZ_SPECIALFIZZNUMBERCONVERTER_H

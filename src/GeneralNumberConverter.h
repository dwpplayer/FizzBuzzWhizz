//
// Created by twer  on 5/5/15.
//

#ifndef FIZZBUZZWHIZZ_GENERALNUMBERCONVERTER_H
#define FIZZBUZZWHIZZ_GENERALNUMBERCONVERTER_H


#include "NumberConverter.h"

class GeneralNumberConverter: public NumberConverter {
protected:
    virtual std::string Convert(int nNumber);
};


#endif //FIZZBUZZWHIZZ_GENERALNUMBERCONVERTER_H

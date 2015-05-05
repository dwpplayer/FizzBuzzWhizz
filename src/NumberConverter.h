//
// Created by twer  on 5/5/15.
//

#ifndef FIZZBUZZWHIZZ_NUMBERCONVERTER_H
#define FIZZBUZZWHIZZ_NUMBERCONVERTER_H


#include <vector>
#include <string>

class NumberConverter {
public:
    NumberConverter();

public:
    std::string TurnNumber(int nNumber);
    void SetSpecialDigits(std::vector<int> const &specialDigits);
    void SetNextConverter(std::shared_ptr<NumberConverter> nextConverter);

protected:
    virtual std::string Convert(int nNumber) = 0;

protected:
    static std::vector<int> _specialDigits;
    std::shared_ptr<NumberConverter> _nextConverter;
};


#endif //FIZZBUZZWHIZZ_NUMBERCONVERTER_H

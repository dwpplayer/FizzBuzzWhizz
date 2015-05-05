//
// Created by twer  on 5/5/15.
//

#ifndef FIZZBUZZWHIZZ_NUMBEROFFGAME_H
#define FIZZBUZZWHIZZ_NUMBEROFFGAME_H


#include <iosfwd>
#include <vector>
class NumberConverter;
class NumberOffGame {

public:
    NumberOffGame(std::vector<int> const &digits);

    std::string TurnNumber(int nNumber);

    std::string Run();

private:
    std::shared_ptr<NumberConverter> _converter;
};


#endif //FIZZBUZZWHIZZ_NUMBEROFFGAME_H

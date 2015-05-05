//
// Created by twer  on 5/5/15.
//

#include <sstream>
#include "GeneralNumberConverter.h"

std::string GeneralNumberConverter::Convert(int nNumber) {
    std::ostringstream os;
    os << nNumber;
    return os.str();
}

//
//  Currency.cpp
//  Arbitration
//
//  Created by Pavlo Boiko on 05.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#include "Currency.hpp"

Currency::Currency(std::string *_name) {
    Currency::Currency(name,((char *)_name)[0]);
}

Currency::Currency(std::string *_name,char _simbol) {
    name = _name;
    simbol = _simbol;
}

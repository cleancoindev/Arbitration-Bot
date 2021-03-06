//
//  BalanceProperty.hpp
//  Arbitration
//
//  Created by Pavlo Boiko on 11.11.17.
//  Copyright © 2017 Pavlo Boiko. All rights reserved.
//

#ifndef BalanceProperty_hpp
#define BalanceProperty_hpp

#include <stdio.h>
#include "Currency.hpp"

class BalanceProperty {
private:
    double balance;
public:
    Currency *currency;
    BalanceProperty(int _balance,Currency *_currency);
    bool incrementBalanceBySum(double sum);
    bool decrementBalanceBySum(double sum);
    double getBalance();
};

#endif /* BalanceProperty_hpp */

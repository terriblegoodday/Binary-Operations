//
//  binlib.cpp
//  Binary Operations
//
//  Created by Eduard Dzhumagaliev on 10/19/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#include "binlib.hpp"
#include <cstdio>

// Returns unsigned integer n converted to 2^n
int n22n(int n) {
    int b = 0b1;
    b <<= n;
    return b;
}

// Returns binary representation of an integer n
std::string intToBinary(unsigned n) {
    std::string output = "0b";
    for (unsigned i = 1 << 31; i > 0; i = i / 2) {
        if (n & i) output += "1";
            else output += "0";
    }
    return output;
}

unsigned getOnes(unsigned n) {
    int q = 0;
    for (unsigned i = 1 << 31; i > 0; i = i / 2)
        if (n & i) q += 1;
    return q;
}


unsigned hiBit(unsigned n) {
    if (n == 0) {
        return 0;
    }
    unsigned hBit = 0;
    while (n != 0 ) {
        n = n / 2;
        hBit += 1;
    }
    return hBit;
}

unsigned setTo1(unsigned n, unsigned i) {
    unsigned orMask = 1 << (i);
    return n | orMask;
}

unsigned setTo0(unsigned n, unsigned i) {
    unsigned andMask = ~(1 << (i));
    return n & andMask;
}

unsigned diff(unsigned n, unsigned i) {
    unsigned xorMask = 1 << (i);
    return n ^ xorMask;
}

unsigned shl(unsigned n) {
    unsigned shiftMask = 1 << 31;
    return (n << 1) | (((n & shiftMask) == (1 << 31)) ? 1 : 0);
}

unsigned count11(unsigned n) {
    unsigned shiftMask = 3;
    unsigned c = 0;
    while (n != 0) {
        if ((n & shiftMask) == shiftMask) c++;
        n >>= 1;
    }
    return c;
}

unsigned swapBits(unsigned n, unsigned a, unsigned b) {
    unsigned r = n;
    unsigned maskA = 1 << a;
    unsigned maskB = 1 << b;
    bool isA = n & maskA; // is the ath bit set?
    bool isB = n & maskB; // is the bth bit set?
    if (isA) r = setTo1(r, b);
    else r = setTo0(r, b);
    if (isB) r = setTo1(r, a);
    else r = setTo0(r, a);
    return r;
}

unsigned strikeBit(unsigned n, unsigned i) {
    unsigned mask = ~0;
    unsigned l = (n & (mask << (i+1))) >> 1;
    unsigned r = ~(mask << i);
    return l | r;
}

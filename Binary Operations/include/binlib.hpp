//
//  binlib.hpp
//  Binary Operations
//
//  Created by Eduard Dzhumagaliev on 10/19/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef binlib_hpp
#define binlib_hpp

#include <stdio.h>
#include <string>

//using namespace std;

// 2 to power of n
int n22n(int n);
// convert int to binary using bitwise operators
std::string intToBinary(unsigned n);
// get all ones in n
unsigned getOnes(unsigned n);
// get the highest bit in n
unsigned hiBit(unsigned n);
// set ith bit to 1
unsigned setTo1(unsigned n, unsigned i);
// set ith bit to 0
unsigned setTo0(unsigned n, unsigned i);
// toggle bit on position i
unsigned diff(unsigned n, unsigned i);
// shl n,1
unsigned shl(unsigned n);
// count 0b11s in an unsigned n
unsigned count11(unsigned n);
// swap bits a and b in an unsigned integer n
unsigned swapBits(unsigned n, unsigned a, unsigned b);
// strike the ith bit out of an unsigned integer n
unsigned strikeBit(unsigned n, unsigned i);

#endif /* binlib_hpp */

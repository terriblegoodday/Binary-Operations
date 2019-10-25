//
//  Binary_Operations_Tests.m
//  Binary Operations Tests
//
//  Created by Eduard Dzhumagaliev on 10/19/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#import <XCTest/XCTest.h>

#include "binlib.hpp"

@interface Binary_Operations_Tests : XCTestCase

@end

@implementation Binary_Operations_Tests

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)testn22n {
    XCTAssert(n22n(3) == 8);
    XCTAssert(n22n(10) == 1024);
    XCTAssert(n22n(0) == 1);
}

- (void)testPrintBinary {
    XCTAssert(intToBinary(2) ==   "0b00000000000000000000000000000010");
    XCTAssert(intToBinary(3) ==   "0b00000000000000000000000000000011");
    XCTAssert(intToBinary(256) == "0b00000000000000000000000100000000");
    XCTAssert(intToBinary(267) == "0b00000000000000000000000100001011");
}

- (void)testGetOnes {
    XCTAssert(getOnes(0) == 0);
    XCTAssert(getOnes(2) == 1);
    XCTAssert(getOnes(3) == 2);
    XCTAssert(getOnes(256) == 1);
    XCTAssert(getOnes(267) == 4);
}

- (void)testHiBit {
    XCTAssert(hiBit(0) == 0);
    XCTAssert(hiBit(2) == 2);
    XCTAssert(hiBit(256) == 9);
    XCTAssert(hiBit(267) == 9);
    XCTAssert(hiBit(3) == 2);
}

- (void)testSetTo1 {
    XCTAssert(setTo1(256, 0) == 257);
    XCTAssert(setTo1(256, 1) == 258);
}

- (void)testSetTo0 {
    XCTAssert(setTo0(257, 0) == 256);
    XCTAssert(setTo0(258, 1) == 256);
}

- (void)testDiff {
    XCTAssert(diff(257, 0) == 256);
    XCTAssert(diff(258, 1) == 256);
    XCTAssert(diff(256, 0) == 257);
}

- (void)testShl {
    XCTAssert(shl(1 << 31) == 1);
    unsigned t = ~0;
    XCTAssert(
        shl(
            (1 << 31) - 1
            ) == (t << 1)
              );
}

- (void)testCount11 {
    XCTAssert(count11(247) == 5);
}

- (void)testSwapBits {
    XCTAssert(swapBits(5, 0, 1) == 6);
    XCTAssert(swapBits(6, 0, 1) == 5);
}

- (void)testStrikeBit {
    XCTAssert(strikeBit(11, 2) == 7);
    XCTAssert(strikeBit(0b110, 1) == 3);
}

@end

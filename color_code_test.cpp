#include <stdio.h>
#include <assert.h> 
#include <color_constants.h> 
#include"color_number_pair.h"

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

void runTests() {
    // Test known color pairs
    testNumberToPair(1, WHITE, BLUE);
    testNumberToPair(2, WHITE, ORANGE);
    testNumberToPair(3, WHITE, GREEN);
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    // More pairs
    testNumberToPair(6, RED, BLUE);
    testNumberToPair(7, RED, ORANGE);
    testNumberToPair(8, RED, GREEN);
    testNumberToPair(9, RED, BROWN);
    testNumberToPair(10, RED, SLATE);

    testNumberToPair(11, BLACK, BLUE);
    testNumberToPair(12, BLACK, ORANGE);
    testNumberToPair(13, BLACK, GREEN);
    testNumberToPair(14, BLACK, BROWN);
    testNumberToPair(15, BLACK, SLATE);

    testNumberToPair(16, YELLOW, BLUE);
    testNumberToPair(17, YELLOW, ORANGE);
    testNumberToPair(18, YELLOW, GREEN);
    testNumberToPair(19, YELLOW, BROWN);
    testNumberToPair(20, YELLOW, SLATE);

    testNumberToPair(21, VIOLET, BLUE);
    testNumberToPair(22, VIOLET, ORANGE);
    testNumberToPair(23, VIOLET, GREEN);
    testNumberToPair(24, VIOLET, BROWN);
    testNumberToPair(25, VIOLET, SLATE);

    // Test pair to number
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
}


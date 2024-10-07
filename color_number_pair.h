#ifndef COLOR_NUMBER_PAIR_H
#define COLOR_NUMBER_PAIR_H

#include <stdio.h>
#include <assert.h>
#include "color_constants.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif // COLOR_NUMBER_PAIR_H

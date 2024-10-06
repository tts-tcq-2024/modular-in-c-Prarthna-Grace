// color_constants.h

#ifndef color_constants_H
#define color_constants_H

#include <stdio.h>

#define COLOR_PAIRS 25

// Major colors
const char *MAJOR_COLORS[10] = {
    "White", "Red", "Black", "Yellow", "Violet",
    "Blue", "Orange", "Green", "Brown", "Slate"
};

// Minor colors
const char *MINOR_COLORS[10] = {
    "White", "Red", "Black", "Yellow", "Violet",
    "Blue", "Orange", "Green", "Brown", "Slate"
};

// Color code mapping
const char *COLOR_CODE_MAP[COLOR_PAIRS][2] = {
    {"White", "Blue"}, {"White", "Orange"}, {"White", "Green"},
    {"White", "Brown"}, {"White", "Slate"}, {"Red", "Blue"},
    {"Red", "Orange"}, {"Red", "Green"}, {"Red", "Brown"},
    {"Red", "Slate"}, {"Black", "Blue"}, {"Black", "Orange"},
    {"Black", "Green"}, {"Black", "Brown"}, {"Black", "Slate"},
    {"Yellow", "Blue"}, {"Yellow", "Orange"}, {"Yellow", "Green"},
    {"Yellow", "Brown"}, {"Yellow", "Slate"}, {"Violet", "Blue"},
    {"Violet", "Orange"}, {"Violet", "Green"}, {"Violet", "Brown"},
    {"Violet", "Slate"}
};

#endif // _COLOR_CONSTANTS_H

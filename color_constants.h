#ifndef COLOR_CONSTANTS_H
#define COLOR_CONSTANTS_H

// Enums for Major and Minor Colors
enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

// Struct for color pairs
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

// Arrays of color names
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern const int numberOfMajorColors;
extern const int numberOfMinorColors;

// Maximum length for color pair names
extern const int MAX_COLORPAIR_NAME_CHARS;

#endif // COLOR_CONSTANTS_H

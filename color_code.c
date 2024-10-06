// color_code.c

#include "constants.h"

void get_color_pair(int number, const char **major, const char **minor) {
    if (number >= 1 && number <= COLOR_PAIRS) {
        *major = COLOR_CODE_MAP[number - 1][0];
        *minor = COLOR_CODE_MAP[number - 1][1];
    } else {
        *major = "Unknown";
        *minor = "Unknown";
    }
}

void translate_color_pairs(int *numbers, int count) {
    for (int i = 0; i < count; i++) {
        const char *major, *minor;
        get_color_pair(numbers[i], &major, &minor);
        printf("Number %d corresponds to color pair: %s / %s\n", 
               numbers[i], major, minor);
    }
}

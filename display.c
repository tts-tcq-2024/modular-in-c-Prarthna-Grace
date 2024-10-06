// display.c

#include "color_constants.h"

void print_color_mapping() {
    printf("25-Pair Color Code Reference Manual\n");
    printf("Number | Major Color | Minor Color\n");
    printf("-------------------------------------\n");
    for (int i = 0; i < COLOR_PAIRS; i++) {
        printf("%6d | %-12s | %s\n", i + 1, COLOR_CODE_MAP[i][0], COLOR_CODE_MAP[i][1]);
    }
}

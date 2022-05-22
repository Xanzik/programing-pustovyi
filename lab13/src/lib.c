/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
#include "lib.h"
void read_from_file(FILE *filein, int *x, char *y) {
    fscanf(filein, "%d %c", x, y);
}
void write_to_file(FILE *fileout, int height, char symbol) {
    for (int i = 0; i < height; i++, fprintf(fileout, "\n")) {
    for (int j = (height - i) - 1; j > 0 ; --j, fprintf(fileout, " "));
    for (int j = (i * 2) + 1; j > 0 ; --j, fprintf(fileout, "%c", symbol));
    }
}


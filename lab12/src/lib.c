/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
#include "lib.h"
void percent(char *arr, int x) {
    double vowels = 0;
    double glas = 0;
    for (int i = 0; i < x; i++) {
        switch(*(arr + i)) {
            case 'a': vowels++; break;
            case 'e': vowels++; break;
            case 'i': vowels++; break;
            case 'o': vowels++; break;
            case 'u': vowels++; break;
            case 'y': vowels++; break;
            case 'A': vowels++; break;
            case 'E': vowels++; break;
            case 'I': vowels++; break;
            case 'O': vowels++; break;
            case 'U': vowels++; break;
            case 'Y': vowels++; break;
            case 'b': glas++; break;
            case 'c': glas++; break;
            case 'd': glas++; break;
            case 'f': glas++; break;
            case 'g': glas++; break;
            case 'h': glas++; break;
            case 'j': glas++; break;
            case 'k': glas++; break;
            case 'l': glas++; break;
            case 'm': glas++; break;
            case 'n': glas++; break;
            case 'p': glas++; break;
            case 'q': glas++; break;
            case 'r': glas++; break;
            case 's': glas++; break;
            case 't': glas++; break;
            case 'v': glas++; break;
            case 'w': glas++; break;
            case 'x': glas++; break;
            case 'z': glas++; break;
            case 'B': glas++; break;
            case 'C': glas++; break;
            case 'D': glas++; break;
            case 'F': glas++; break;
            case 'G': glas++; break;
            case 'H': glas++; break;
            case 'J': glas++; break;
            case 'K': glas++; break;
            case 'L': glas++; break;
            case 'M': glas++; break;
            case 'N': glas++; break;
            case 'P': glas++; break;
            case 'Q': glas++; break;
            case 'R': glas++; break;
            case 'S': glas++; break;
            case 'T': glas++; break;
            case 'V': glas++; break;
            case 'W': glas++; break;
            case 'X': glas++; break;
            case 'Z': glas++; break;
        };
}
	printf("Glas;%f Soglas:%f", glas, vowels);
    	double end = (glas / (glas+vowels)) * 100;
    	double vow = 100-end;
    printf("Гласных:%1.fвідсоткі, согласных:%1.fвідсотків", end, vow);
}

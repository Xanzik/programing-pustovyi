/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Pustovy I.
 * @date 26-apr-2022
 * @version 1.0
 */
#include "lib.h"
int func(int x) {
    for(int i = 2; i < x; i++)
        if(x % i != 0)
            continue;
        else { 
            x = 0;
        }
    return x;
}

/**
 * @file lib.h
 * @brief Файл з описом функцій
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define count_of_watches 3
typedef struct created_by{
    char firma[250];
    char country[250];
} created_by;  
typedef struct watch{
    char name [250];
    char water [6];
    int price;
    created_by made_by;
    char type[250];
} watch;    
void input(watch *watches, int size);
void show(watch *p);
void sort(watch *p);
void output(watch *p);
void search(watch *p, int cost);
double averageprice(watch *p);
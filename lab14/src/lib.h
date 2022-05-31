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
/**
 * @brief підструктура
 * 
 */
typedef struct created_by{
    char firma[250];
    char country[250];
} created_by;  
/**
 * @brief Структура "часи"
 * 
 */
typedef struct watch{
    char name [250];
    char water [6];
    int price;
    created_by made_by;
    char type[250];
} watch;    
/**
 * @brief функція вводу з файлу
 * 
 * @param watches структура
 * @param size індекс
 */
void input(watch *watches, int size);
/**
 * @brief вивод структур
 * 
 * @param p масив елементів
 */
void show(watch *p);
/**
 * @brief сортіровка структур
 * 
 * @param p масив елементів
 */
void sort(watch *p);
/**
 * @brief вивод у файл
 * 
 * @param p масив елемтів
 */
void output(watch *p);
/**
 * @brief функція поіску за ціною
 * 
 * @param p масив елементів
 * @param cost ціна
 */
void search(watch *p, int cost);
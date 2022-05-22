/**
 * @file lib.h
 * @brief Файл з описом функцій
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
Розмір першого та другого масивів
 */
#define N 4
#define M 3
/**
 * Функція сортіровки
 *
 * Функція сортирує масив бульбашкою
 * @param *arr3 {@link SORT} для передачі масиву у функцію
 */
void SORT(int *arr3);
/**
 * Функція для запису
 *
 * Функція записує трейтій та другий масиви у третій масив
 * @param *arr3, *arr2, *arr1 {@link SUM} для передачі масивів у функцію
 * @param  де *arr3 третій масив
 */
void SUM(int *arr3, int *arr2, int *arr1);

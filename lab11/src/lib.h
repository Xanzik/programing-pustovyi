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
/**
 * Input
 * Функція для ввода елементів двомірного масиву
 * 
 * @param entity двомірний масив {@link arr} та його розмір {@link x}
 * @return заповнений масив {@link arr}
 */
void Input(double **arr, unsigned long x);
/**
 * @brief 
 * 
 * @param entity двомірний масив {@link arr} та його розмір {@link x}
 * @return вивод масиву {@link arr}
 */
void Output1(double **arr, unsigned long x);
/**
 * @brief 
 * 
 * @param entity двомірний масив {@link arr} та його розмір {@link x}
 * @return транспонований масив {@link arr}
 */
void Output2(double **arr, unsigned long x);

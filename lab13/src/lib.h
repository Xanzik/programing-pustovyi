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
 * read_from_file - Функція читання з файлу
 * 
 * @param filein файл з якого буде читання
 * @param x змінна для висоти
 * @param y змінна для символу
 * @return змінну {@link x} та змінну {@link y} для висоти і символу 
 */
void read_from_file(FILE *filein, int *x, char *y);
/**
 * write_to_file - Функція запису у файл
 * 
 * @param fileout файл виводу
 * @param height висота
 * @param symbol символ
 * @return рисунок у файлі
 */
void write_to_file(FILE *fileout, int height, char symbol);

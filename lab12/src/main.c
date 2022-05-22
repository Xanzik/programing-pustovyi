/**
 * @mainpage
 * # Загальне завдання
 * Переробити програми, що були розроблені під час виконання лабораторних робіт з тем
 * “Масиви” та “Цикли” таким чином, щоб використовувалися функції для обчислення результату.
 * Функції повинні задовольняти основну їх причетність - уникати дублювання коду. Тому,
 * для демонстрації роботи, ваша програма (функція main()) повинна мати можливість викликати
 * розроблену функцію з різними вхідними даними.
 *
 * @file main.c
 * @brief Файл з основним кодом.
 *
 * @author Pustovyi I.
 * @date 10-may-2022
 * @version 1.0
 */
#include "lib.h"
int main() {
    char *line = (char*)malloc(size * sizeof(char));
    FILE *file = fopen("/home/xanzik/programing-pustovyi/lab12/assets/input", "r");
    fgets(line, size, file);
    printf("%s", line);
    percent(line, size);
    fclose(file);
    free(line);
    return 0;
}

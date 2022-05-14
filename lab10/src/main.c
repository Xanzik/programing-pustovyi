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
    srand((unsigned)time(NULL));
    int *arr1 = (int*)malloc(N * sizeof(int));
    int *arr2 = (int*)malloc(M * sizeof(int));
    int *arr3 = (int*)malloc((M + N) * sizeof(int));
    for(int i = 0; i < N; i++) {
        *(arr1 + i) = rand()%10;
        *(arr2 + i) = rand()%10;
    }
    SUM(arr3, arr2, arr1);
    SORT(arr3);
    free(arr1);
    free(arr2);
    free(arr3);
    return 0;
}

/**
 * @mainpage
 * # Загальне завдання
 * Дано два масиви: mas1[N] і mas2[M]. Створити третій масив, у який переписати елементи
 * масиву mas1, а потім mas2. Отриманий масив упорядкувати за зростанням.
 *
 *
  * @author Pustovyi I.
 * @date 10-may-2022
 * @version 1.0
 */

/** @file main.c
 * @brief Файл з основним кодом.
 *
 * @author Pustovyi I.
 * @date 10-may-2022
 * @version 1.0
 */
#include "lib.h"
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення дінамічних масивів
 * - заповнення масивів за допомогою функції {@rand()}
 * - переписуємо елементи першого та другого массивів у третій за допомогою функції
 * {@link SUM}
 * - сортируємо масив за допомогою функції
 * {@link SORT}
 * @return успішний код повернення з програми (0)
 */
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

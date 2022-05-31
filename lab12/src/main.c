/**
 * @mainpage
 * # Загальне завдання
 * Визначити, скільки у тексті голосних і скільки приголосних букв. Вивести на екран
 * процентне співвідношення.
 *
 * @file main.c
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
 * - створюємо динамічний масив
 * - відкриваємо файл
 * - разуємо скільки у строчці гласних та согласних
 * {@link percent}
 * @return успішний код повернення з програми (0)
 */
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

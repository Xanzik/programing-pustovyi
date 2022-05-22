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
	double x = 0;
	watch watches[count_of_watches];
	int size = sizeof(watches) / sizeof(watches[0]);
	input(watches, size);
	show(watches);
	search(watches, 400);
	x = averageprice(watches);
	printf("\n");
	printf("%f\n", x);
    return 0;
}

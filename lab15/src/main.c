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
#include "list.h"
int main() {
	unsigned long int cout = (unsigned long int)count();
	struct watch *watches = malloc(cout * sizeof(struct watch));
	struct Container *container = malloc(1 * sizeof(struct Container));
	input(watches, cout);
	container->size = cout;
	for(unsigned long int i = 0; i < cout; i++) {
	(container+i)->watches = watches+i;
	}
	put_away(container, 0 ,&cout);
	free(watches);
	free(container);
    return 0;
}
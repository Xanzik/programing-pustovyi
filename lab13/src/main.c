/**
 * @mainpage
 * # Загальне завдання
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
 * - відкриваємо файл та читаем з нього висоту і символ трикутника
 * - {@link read_from_file}
 * - рісуєм трикутник 
 * - {@link write_to_file}
 * @return успішний код повернення з програми (0)
 */
int main() {
	int h = 0;
	char symbol = '\0';
	FILE *filein = fopen("/home/xanzik/programing-pustovyi/lab13/assets/input.txt", "r");
	FILE *fileout = fopen("/home/xanzik/programing-pustovyi/lab13/assets/output.txt", "w");
	read_from_file(filein, &h, &symbol);
	write_to_file(fileout, h, symbol);
	fclose(filein);
	fclose(fileout);
	return 0;
}

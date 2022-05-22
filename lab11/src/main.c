/**
 * @mainpage
 * # Загальне завдання
 * Визначити транспоновану матрицю.
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
	unsigned long size = 0;
	FILE *file = fopen("/home/xanzik/programing-pustovyi/lab11/assets/input", "r");
	if(file==NULL) {
		printf("error");
		return 1;
	}
	fscanf(file, "%lu", &size);
	printf("%lu", size);
	fclose(file);
	double **arr = (double **) malloc (size * sizeof(double *));
	for(unsigned long n = 0; n < size; n++) {
		*(arr + n) = (double *) malloc (size * sizeof(double));
	}
	Input(arr, size);
	printf("\n");
	Output1(arr, size);
	printf("\n");
	Output2(arr, size);
        printf("\n");
	free(arr);
	return 0;
}

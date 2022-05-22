/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Pustovyi I.
 * @date 26-apr-2022
 * @version 1.0
 */
#include "lib.h"
void Output1(double **arr, unsigned long x) {
	 for(unsigned long n = 0; n < x; n++) {
        	printf("\n");
		for(unsigned long m = 0; m < x; m++) {
			printf("%-8.2lf ", *(*(arr + n) + m));
		}
	}
	}
void Output2(double **arr, unsigned long x) {
	for(unsigned long n = 0; n < x; n++) {
		printf("\n");
		for(unsigned long m = 0; m < x; m++) {
			printf("%-8.2lf ", *(*(arr + m) + n));
		}
	}
	}
void Input(double **arr, unsigned long x) {
	for(unsigned long n = 0; n < x; n++) {
		for(unsigned long m = 0; m < x; m++) {
			printf("Input[%lu][%lu]\n", n, m);
			scanf("%lf", (*(arr + n) + m));
		}
	}
}
/*unsigned long makesize(unsigned long size) {
	FILE *file = fopen("/home/xanzik/programing-pustovyi/lab11/assets/input", "r");
	if(file==NULL) {
		printf("error");
		return 1;
	}
	fscanf(file, "%lu", &size);
	printf("%lu", size);
	fclose(file);
	return size;
} */

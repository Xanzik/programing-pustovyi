/**
 * @file test.c
 * @brief Файл з тестами на реалізації функцій
 *
 * @author Pustovy I.
 * @date 26-apr-2022
 * @version 1.0
 */
#include "lib.h"
#include <check.h>
#define size 2
START_TEST(test_Input) {
	/* double **actual = (double **) malloc (size * sizeof(double *));
	for(unsigned long n = 0; n < size; n++) {
		*(actual + n) = (double *) malloc (size * sizeof(double));
	}
	double expected[size][size] = {{0, 1}, {0, 1}};
	Input(actual, size);
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
    			ck_assert_double_eq((*(*actual + i) + j), expected[i][j]);
    		}
    	}
    	free(actual);
    	*/
}
END_TEST
int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("lab11");
	tcase_add_test(tc_core, test_Input);
	suite_add_tcase(s, tc_core);
	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

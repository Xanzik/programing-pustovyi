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
START_TEST(test_func) {
#define DATA_SIZE_func 7
	int input_data_a[] = { 10, 3, 0, 100, 89, 5, 14 };
	int expected_values[] = { 0, 3, 0, 0, 89, 5, 0 };
		for (int i = 0; i < DATA_SIZE_func; i++) {
			int actual_value = func(input_data_a[i]);
			ck_assert_int_eq(expected_values[i], actual_value);
		}
}
END_TEST

int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("lab09");
	tcase_add_test(tc_core, test_func);
	suite_add_tcase(s, tc_core);
	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

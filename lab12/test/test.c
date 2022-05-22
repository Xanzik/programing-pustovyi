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
#define size 100
START_TEST(test_percent) {
}
END_TEST

int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("lab12");
	tcase_add_test(tc_core, test_percent);
	suite_add_tcase(s, tc_core);
	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

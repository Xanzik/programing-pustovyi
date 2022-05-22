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

/**
 * Верифікація роботи функції {@link SUM}
 * на основі набора масивів вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
START_TEST(test_SUM) {
	int *arr1 = (int*)malloc(N * sizeof(int));
	int *arr2 = (int*)malloc(M * sizeof(int));
	int *arr3 = (int*)malloc((M + N) * sizeof(int));
	for(int i = 0; i < N; i++) {
		*(arr1+i) = i;
	}
	for(int i = 0; i < M; i++) {
		*(arr2+i) = i;
	}
	int *actual = (int*)malloc((M + N) * sizeof(int));
	int expected[N+M] = { 0, 1, 2, 3, 0, 1, 2};
	SUM(actual, arr2, arr1);
	for(int i = 0; i < (N+M); i++) {
    		ck_assert_int_eq(*(actual + i), expected[i]);
    	}
    	free(arr1);
    	free(arr2);
    	free(arr3);
    	free(actual);
    	}
END_TEST

/**
 * Верифікація роботи функції {@link SORT}
 * на основі набора масива вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
START_TEST(test_SORT) {
	int *actual = (int*)malloc((M + N) * sizeof(int));
	for(int i = 0; i < (N+M); i++) {
		*(actual+i) = i+1;
	}
	int expected[M+N] = {1, 2, 3, 4, 5, 6, 7};
	SORT(actual);
	for(int i = 0; i < (N+M); i++) {
    		ck_assert_int_eq(*(actual + i), expected[i]);
    	}
    	free (actual);
	}
END_TEST
/**
 * Точка входу модуля тестування.
 *
 * Запускає розроблені функції верифікації функцій роботи з масівами
 * {@link *arr1, *arr2, *arr3}.
 *
 * По завершенню тестів виводиться на екран резуміюча інформація про стан
 * проходження тестів.
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("lab10");
	tcase_add_test(tc_core, test_SUM);
	tcase_add_test(tc_core, test_SORT);
	suite_add_tcase(s, tc_core);
	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

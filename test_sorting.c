#include <check.h>
#include "sort.h"
START_TEST(test_bubble_sort)
{
    int unsorted[] = {5, 3, 8, 1, 2};
    int expected[] = {1, 2, 3, 5, 8};
    size_t size = sizeof(unsorted) / sizeof(unsorted[0]);

    bubble_sort(unsorted, size);

    ck_assert_str_eq(unsorted, expected, size * sizeof(int));
}

Suite *sort_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("Sort");

    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_bubble_sort);

    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) 
{
    Suite *s;
    SRunner *sr;

    s = sort_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    int failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (failed == 0) ? 0 : 1;
}

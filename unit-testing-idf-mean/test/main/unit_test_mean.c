#include <stdio.h>
#include <string.h>
#include "unity.h"
#include "esp_task_wdt.h"

void print_banner(const char*);

void app_main(void) {
    print_banner("Executing one test by its name");
    UNITY_BEGIN();
    unity_run_test_by_name("Mean of an empty array is zero");
    UNITY_END();

    print_banner("Running tests with [mean] tag");
    UNITY_BEGIN();
    unity_run_tests_by_tag("[mean]", false);
    UNITY_END();

    print_banner("Running tests without [fails] tag");
    UNITY_BEGIN();
    unity_run_tests_by_tag("[fails]", true);
    UNITY_END();

    print_banner("Running all registered tests");
    UNITY_BEGIN();
    unity_run_all_tests();
    UNITY_END();

    esp_task_wdt_delete(NULL);
    print_banner("Starting interactive test menu");
    unity_run_menu();
}

void print_banner(const char* message) {
    printf("\n============ %s ============\n\n", message);
}

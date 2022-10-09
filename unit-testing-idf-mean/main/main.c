#include <stdio.h>

#include "esp_random.h"
#include "testable.h"

void app_main(void) {
    const int count = 32;
    const int max = 100;

    printf("Membuat random number sebanyak %d, dengan nilai dibawah %d\n", count, max);
    int *numbers = calloc(count, sizeof(numbers[0]));
    for (int i = 0; i < count; i++) {
        numbers[i] = 1 + esp_random() % (max - 1);
        printf("%4d ", numbers[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    int mean = testable_mean(numbers, count);
    printf("\nMean: %d\n", mean);
    free(numbers);
}

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int maxCandies = candies[0];

    // Find the maximum number of candies
    for (int i = 1; i < candiesSize; i++) {
        if (candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }

    // Set the output array size
    *returnSize = candiesSize;

    // Allocate memory for the result
    bool* result = (bool*)malloc(candiesSize * sizeof(bool));

    if (result == NULL) {
        return NULL;
    }

    // Check each kid
    for (int i = 0; i < candiesSize; i++) {
        result[i] = (candies[i] + extraCandies >= maxCandies);
    }

    return result;
}

int main(void) {
    int candies[] = {2, 3, 5, 1, 3};
    int candiesSize = sizeof(candies) / sizeof(candies[0]);
    int extraCandies = 3;
    int returnSize = 0;

    bool* result = kidsWithCandies(
        candies, candiesSize, extraCandies, &returnSize
    );

    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Output: [");

    for (int i = 0; i < returnSize; i++) {
        printf("%s", result[i] ? "true" : "false");

        if (i < returnSize - 1) {
            printf(", ");
        }
    }

    printf("]\n");

    free(result);
    return 0;
}

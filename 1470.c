
#include <stdio.h>
#include <stdlib.h>

int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    *returnSize = numsSize;

    int* ans = malloc(numsSize * sizeof(int));

    if (ans == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        ans[2 * i] = nums[i];
        ans[2 * i + 1] = nums[i + n];
    }

    return ans;
}

int main(void) {
    int nums[] = {2, 5, 1, 3, 4, 7};
    int returnSize;

    int* result = shuffle(nums, 6, 3, &returnSize);

    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Shuffled Array: ");

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");

    free(result);

    return 0;
}

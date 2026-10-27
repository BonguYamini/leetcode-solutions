<<<<<<< Updated upstream

#include <stdio.h>
#include <stdlib.h>

int* buildArray(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * sizeof(int));

    if (ans == NULL) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[nums[i]];
    }

    return ans;
}

int main(void) {
    int nums[] = {0, 2, 1, 5, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* ans = buildArray(nums, numsSize, &returnSize);

    if (ans == NULL) {
        return 1;
    }

    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", ans[i]);
        if (i < returnSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(ans);
    return 0;
}
=======

#include <stdio.h>
#include <stdlib.h>

int* buildArray(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * sizeof(int));

    if (ans == NULL) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[nums[i]];
    }

    return ans;
}

int main(void) {
    int nums[] = {0, 2, 1, 5, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* ans = buildArray(nums, numsSize, &returnSize);

    if (ans == NULL) {
        return 1;
    }

    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", ans[i]);
        if (i < returnSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(ans);
    return 0;
}
>>>>>>> Stashed changes

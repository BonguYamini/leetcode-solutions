#include <stdio.h>
int* runningSum(int* nums, int numsSize, int* returnSize) {
    for (int i = 1; i < numsSize; i++) {
        nums[i] = nums[i] + nums[i - 1];
    }

    *returnSize = numsSize;
    return nums;
}
int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = 4;
    int returnSize;

    int* result = runningSum(nums, numsSize, &returnSize);

    printf("Running Sum: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");
    return 0;
}
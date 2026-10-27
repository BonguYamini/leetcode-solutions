#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }

    return false;
}

int main(void) {
    int nums[] = {1, 2, 3, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    if (containsDuplicate(nums, numsSize)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
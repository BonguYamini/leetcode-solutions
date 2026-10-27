<<<<<<< Updated upstream

#include <stdio.h>

int findNumbers(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        int digits = 0;

        while (num > 0) {
            digits++;
            num = num / 10;
        }

        if (digits % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int nums[] = {12, 345, 2, 6, 7896};
    int numsSize = 5;

    printf("%d\n", findNumbers(nums, numsSize));

    return 0;
}
=======

#include <stdio.h>

int findNumbers(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        int digits = 0;

        while (num > 0) {
            digits++;
            num = num / 10;
        }

        if (digits % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int nums[] = {12, 345, 2, 6, 7896};
    int numsSize = 5;

    printf("%d\n", findNumbers(nums, numsSize));

    return 0;
}
>>>>>>> Stashed changes

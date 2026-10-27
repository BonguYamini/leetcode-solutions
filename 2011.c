<<<<<<< Updated upstream

#include <stdio.h>
#include <string.h>

int finalValueAfterOperations(char** operations, int operationsSize) {
    int count = 0;

    char str1[] = "++X";
    char str2[] = "X++";
    char str3[] = "--X";
    char str4[] = "X--";

    for (int i = 0; i < operationsSize; i++) {
        if (strcmp(operations[i], str1) == 0 ||
            strcmp(operations[i], str2) == 0) {
            count += 1;
        }
        else {
            count -= 1;
        }
    }

    return count;
}

int main(void) {
    char* operations[] = {"--X", "X++", "X++"};
    int operationsSize = 3;

    int result = finalValueAfterOperations(operations, operationsSize);

    printf("Final value of X = %d\n", result);

    return 0;
}
=======

#include <stdio.h>
#include <string.h>

int finalValueAfterOperations(char** operations, int operationsSize) {
    int count = 0;

    char str1[] = "++X";
    char str2[] = "X++";
    char str3[] = "--X";
    char str4[] = "X--";

    for (int i = 0; i < operationsSize; i++) {
        if (strcmp(operations[i], str1) == 0 ||
            strcmp(operations[i], str2) == 0) {
            count += 1;
        }
        else {
            count -= 1;
        }
    }

    return count;
}

int main(void) {
    char* operations[] = {"--X", "X++", "X++"};
    int operationsSize = 3;

    int result = finalValueAfterOperations(operations, operationsSize);

    printf("Final value of X = %d\n", result);

    return 0;
}
>>>>>>> Stashed changes

<<<<<<< Updated upstream

#include <stdio.h>

int maximumWealth(int accounts[3][2], int accountsSize) {
    int maxWealth = 0;

    for (int i = 0; i < accountsSize; i++) {
        int wealth = 0;

        for (int j = 0; j < 2; j++) {
            wealth += accounts[i][j];
        }

        if (wealth > maxWealth) {
            maxWealth = wealth;
        }
    }

    return maxWealth;
}

int main() {
    int accounts[3][2] = {
        {1, 5},
        {7, 3},
        {3, 5}
    };

    int result = maximumWealth(accounts, 3);

    printf("Richest Customer Wealth: %d\n", result);

    return 0;
}
=======

#include <stdio.h>

int maximumWealth(int accounts[3][2], int customers,int banks) {
    int maxWealth = 0;

    for (int i = 0; i < customers; i++) {
        int wealth = 0;

        for (int j = 0; j < banks; j++) {
            wealth += accounts[i][j];
        }

        if (wealth > maxWealth) {
            maxWealth = wealth;
        }
    }

    return maxWealth;
}

int main() {
    int accounts[3][2] = {
        {1, 5},
        {7, 3},
        {3, 5}
    };

    int result = maximumWealth(accounts, 3,2);

    printf("Richest Customer Wealth: %d\n", result);

    return 0;
}
>>>>>>> Stashed changes

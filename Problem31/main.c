#include <stdio.h>

int main() {
        int coins[8] = {1, 2, 5, 10, 20, 50, 100, 200};
        int ways[201] = {0};
        ways[0] = 1;
        for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 201; j++) {
                        if (coins[i] <= j)
                                ways[j] = ways[j] + ways[j-coins[i]];
                }
        }

        printf("Result: %d\n", ways[200]);
        return 0;
}

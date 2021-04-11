#include <stdio.h>

int main() {
        int total = 0;
        int abundants[28123] = {0};

        for (int i = 1; i < 28123; i++) {
                if (abundants[i] == 1)
                        continue;

                int sum = 1;
                int tmp = i/2;
                for (int j = 2; j <= tmp; j++) {
                        if (i % j == 0)
                                sum = sum + j;
                }

                if (sum > i) {
                        abundants[i] = 1;
                        for (int j = 2; j * i < 28123; j++)
                                abundants[j * i] = 1;
                }
        }

        for (int i = 1; i < 28123; i++) {
                int flag = 1;
                for (int j = 12; j <= i - 12; j++) {
                        if (abundants[j] != 1)
                                continue;

                        if (abundants[i - j] == 1) {
                                flag = 0;
                                break;
                        }
                }

                if (flag)
                        total = total + i;
        }

        printf("Result: %d\n", total);
        return 0;
}

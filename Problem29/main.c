#include <stdio.h>
#include <math.h>

int check(double power, double numbers[])
{
        for (int i = 0; i < 9801; i++) {
                if (numbers[i] == 0)
                        return 1;
                else if (power == numbers[i])
                        return 0;
        }

        return 1;
}

int main() {
        double numbers[9801] = {0};
        int tmp = 0;
        for (int i = 2; i <= 100; i++) {
                for (int j = 2; j <= 100; j++) {
                        double power = pow(i, j);
                        if (check(power, numbers)) {
                                numbers[tmp] = power;
                                tmp++;
                        }
                }
        }

        int len = 0;
        for (int i = 0; i < 9801; i++) {
                if (numbers[i] != 0)
                        len++;
        }

        printf("Result: %d\n", len);
        return 0;
}

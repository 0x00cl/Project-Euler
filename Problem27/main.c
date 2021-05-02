#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
        if (n > 2) {
                for (int k = 2; k < n; k++) {
                        if (n % k == 0)
                                return 0;
                }
        }
        return 1;
}

int main() {
        int largest = 0;
        int factor_a = 0;
        int factor_b = 0;
        for (int a = -1000; a < 1000; a++) {
                for (int b = -1000; b <= 1000; b++) {
                        int n = 0;
                        while (is_prime(abs(n*n+a*n+b)))
                                n++;

                        if (n > largest) {
                                factor_a = a;
                                factor_b = b;
                                largest = n;
                        }
                }
        }

        printf("Result: %d\n", factor_a*factor_b);
        return 0;
}

#include <stdio.h>

int main() {
        int divisors = 500;
        int largest_divisors = 0;
        for (int i = 1; 1; i++) {
                int tmp_sum = 0;
                for (int j = 1; j <= i; j++)
                        tmp_sum = tmp_sum + j;

            int tmp_divisors = 0;
            for (int k = 1; k <= tmp_sum; k++) {
                    if (tmp_sum % k == 0)
                            tmp_divisors++;
            }

            if (tmp_divisors >= divisors) {
                    largest_divisors = tmp_sum;
                    break;
            }
        }

        printf("Result: %d\n", largest_divisors);

        return 0;
}

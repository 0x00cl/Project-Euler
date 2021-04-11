#include <stdio.h>

int main() {
        int amicable_total = 0;
        for(int i = 1; i <= 10000; i++) {
                int total_a = 0;
                int total_b = 0;
                for (int j = 1; j < i; j++) {
                        if (i % j == 0)
                                total_a = total_a + j;
                }

                if (total_a <= 10000 && total_a != i) {
                        for (int j = 1; j < total_a; j++) {
                                if (total_a % j == 0)
                                        total_b = total_b + j;
                        }

                        if (i == total_b)
                                amicable_total = amicable_total + total_a;
                }
        }

        printf("Result: %d\n", amicable_total);
        return 0;
}

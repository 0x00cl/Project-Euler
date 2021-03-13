#include <stdio.h>

int main() {
        long prime_limit = 2000000;
        long prime_total = 0;
        for(int i = 2; i < prime_limit; i++) {
                int tmp = 1;
                for (int j = 2; j < i; j++) {
                        if (i % j == 0) {
                                tmp = 0;
                                break;
                        }
                }
                if (tmp)
                        prime_total = prime_total + i;
        }

        printf("Result: %ld\n", prime_total);

        return 0;
}

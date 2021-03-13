#include <stdio.h>

int main() {
        int prime = 0;
        int found_prime = 0;
        for (int i = 2; i != found_prime; i++) {
                int tmp = 1;
                for (int j = 2; j < i; j++) {
                        if (i % j == 0) {
                                tmp = 0;
                                break;
                        }
                }
                if (tmp) {
                        prime++;
                        if (prime == 10001) {
                                found_prime = i;
                                break;
                        }
                }
        }

        printf("Result: %d\n", found_prime);

        return 0;
}

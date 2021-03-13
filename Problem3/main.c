#include <stdio.h>

int main() {
        long long number = 600851475143;
        long long largest_prime_factor = 0;
        int i = 2;
        while(number != 1) {
                if(number % i == 0) {
                        number = number / i;
                        if(largest_prime_factor < i)
                                largest_prime_factor = i;
                } else {
                        i++;
                }
        }

        printf("Result: %lld\n", largest_prime_factor);

        return 0;
}

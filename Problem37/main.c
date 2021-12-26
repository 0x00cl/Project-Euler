#include <stdio.h>
#include <stdlib.h>

int is_prime(int number)
{
        if (number == 1)
                return 0;
        for (int i = 2; i < number; i++) {
                if (number % i == 0)
                        return 0;
        }
        return 1;
}

int check_prime_trunc(int number)
{
        int digit = 0, pos = 1, number_lr = 0;
        while (number != 0) {
                digit = number % 10;
                number_lr = number_lr + digit * pos;
                number /= 10;
                if (!is_prime(number_lr) || !is_prime(number))
                        return 0;
                pos = pos * 10;
        }
        return 1;
}

int main() {
        int result = 0, truncable_primes = 11;
        for (int i = 10; truncable_primes != 0; i++) {
                if (is_prime(i)) {
                        if (check_prime_trunc(i)) {
                                truncable_primes--;
                                result += i;
                        }
                }
        }

        printf("Result: %d\n", result);
        return 0;
}

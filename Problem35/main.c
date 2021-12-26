#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_prime(int number)
{
        for (int i = 2; i < number; i++) {
                if (number % i == 0)
                        return 0;
        }
        return 1;
}

int rotate_check(int prime)
{
        char str_prime[20], tmp;
        sprintf(str_prime, "%d", prime);
        for (int i = 0; i < strlen(str_prime) - 1; i++) {
                for (int j = 0; j < strlen(str_prime) - 1; j++) {
                        tmp = str_prime[j+1];
                        str_prime[j+1] = str_prime[j];
                        str_prime[j] = tmp;
                }
                int rotated_num = strtol(str_prime, NULL, 10);
                if(!is_prime(rotated_num))
                        return 0;
        }
        return 1;
}

int pre_check(int number)
{
        int digit = 0;
        while (number != 0) {
                digit = number % 10;
                switch (digit) {
                case 0:
                case 2:
                case 4:
                case 5:
                case 6:
                case 8:
                        return 0;
                default:
                        break;
                }
                number /= 10;
        }
        return 1;
}

int main() {
        int prime_limit = 1000000;
        int result = 2; // Because of pre_check(), `2` and `5` are added manually.
        for(int i = 2; i < prime_limit; i++) {
                if (pre_check(i) && is_prime(i)) {
                        if (rotate_check(i))
                                result += 1;
                }
        }

        printf("Result: %d\n", result);
        return 0;
}

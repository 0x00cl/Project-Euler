#include <stdio.h>

int is_palindrome(unsigned long long number)
{
        unsigned long long number_reversed = 0, tmp = number, remainder = 0;
        while (tmp != 0) {
                remainder = tmp % 10;
                number_reversed = number_reversed * 10 + remainder;
                tmp = tmp / 10;
        }

        if (number == number_reversed)
                return 1;

        return 0;
}

unsigned long long dec_to_bin(int number)
{
        unsigned long long binary = 0, pos = 1, remainder = 0;
        while (number != 0) {
                remainder = number % 2;
                binary = binary + remainder * pos;
                pos = pos * 10;
                number = number / 2;
        }

        return binary;
}

int main() {
        int result = 0;
        for (int i = 0; i < 1000000; i++) {
                if (is_palindrome(i)) {
                        unsigned long long i_bin = dec_to_bin(i);
                        if (is_palindrome(i_bin))
                                result += i;
                }
        }

        printf("Result: %d\n", result);
        return 0;
}

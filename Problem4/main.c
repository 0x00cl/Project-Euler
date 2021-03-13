#include <stdio.h>

int is_palindrome(int number) {
        int result = 0;
        int number_reversed = 0;
        int tmp = number;
        while (tmp != 0) {
                int remainder = tmp % 10;
                number_reversed = number_reversed * 10 + remainder;
                tmp = tmp / 10;
        }

        if (number == number_reversed)
                result = 1;

        return result;
}

int main() {
        int largest_palindrome = 0;
        int product = 0;
        for (int i = 100; i < 1000; i++) {
                for (int j = 100; j < i; j++) {
                        product = i * j;
                        if (is_palindrome(product)) {
                                if (largest_palindrome < product)
                                        largest_palindrome = product;
                        }
                }
        }

        printf("Result: %d\n", largest_palindrome);

        return 0;
}

#include <stdio.h>
#define NUM_DIGITS 200

int main() {
        int big_number[NUM_DIGITS] = {0};
        int total = 0;

        big_number[0] = 1;
        for (int i = 1; i <= 100; i++) {
                int carry = 0;
                for (int j = 0; j < NUM_DIGITS; j++) {
                        int tmp = big_number[j] * i + carry;
                        big_number[j] = tmp % 10;
                        carry = tmp / 10;
                }
        }

        for (int i = 0; i < NUM_DIGITS; i++)
                total = total + big_number[i];

        printf("Result: %d\n", total);
        return 0;
}

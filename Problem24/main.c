#include <stdio.h>
#include <stdlib.h>

#define N_DIGITS 10
#define POSITION 1000000

int main() {
        int pos = POSITION - 1;
        char digits[N_DIGITS] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
        int permutations = 1;

        for (int i = 2; i <= N_DIGITS; i++)
                permutations = permutations * i;

        for (int i = N_DIGITS; i > 0; i--) {
                pos = pos % permutations;
                permutations = permutations / i;
                int digits_pos = abs(pos / permutations);
                printf("%c", digits[digits_pos]);

                for (int j = 0, counter = 0; j < i; j++) {
                        if (digits[digits_pos] != digits[j]) {
                                digits[counter] = digits[j];
                                counter++;
                        }
                }
        }

        printf("\n");
        return 0;
}

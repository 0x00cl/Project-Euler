#include <stdio.h>
#include <math.h>

int main() {
        int sum_squares = 0;
        int square_sum = 0;
        int tmp_square = 0;
        for (int i = 1; i <= 100; i++) {
                sum_squares = sum_squares + pow(i, 2);
                tmp_square = tmp_square + i;
        }
        square_sum = pow(tmp_square, 2);

        printf("Result: %d\n", square_sum - sum_squares);

        return 0;
}

#include <stdio.h>

int main() {
        int fib_previous[1001] = {0};
        int fib_actual[1001] = {0};
        int fib_index = 3;
        int reach_fib_len = 1;
        fib_previous[0] = 1;
        fib_actual[0] = 2;
        while (reach_fib_len) {
                int tmp_fibonacci[1001] = {0};
                for (int j = 0; j < 1001; j++)
                        tmp_fibonacci[j] = fib_actual[j];

                int carry = 0;
                for (int j =0; j < 1001; j++) {
                        int aux = fib_actual[j] + fib_previous[j] + carry;
                        carry = aux / 10;
                        fib_actual[j] = aux %10;
                }

                for (int j = 0; j < 1001; j++)
                        fib_previous[j] = tmp_fibonacci[j];

                if (fib_actual[999] != 0 || fib_actual[1000] != 0)
                        reach_fib_len = 0;

                fib_index++;
        }

        printf("Result: %d\n", fib_index);
        return 0;
}

#include <stdio.h>

int main() {
        int previous_fib = 1;
        int actual_fib = 2;
        int total = 0;
        while(actual_fib < 4000000) {
                if(actual_fib % 2 == 0)
                        total = total + actual_fib;

                int tmp = actual_fib;
                actual_fib = actual_fib + previous_fib;
                previous_fib = tmp;
        }

        printf("Result: %d\n", total);

        return 0;
}

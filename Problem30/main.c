#include <stdio.h>
#include <math.h>

int main() {
        int counter = 0;
        for (int i = 2; i < 354294; i++) {
                int tmp = i;
                int total_tmp = 0;
                while (tmp > 0) {
                        int mod = tmp % 10;
                        total_tmp = total_tmp + pow(mod, 5);
                        tmp = tmp / 10;
                }

                if (total_tmp == i)
                        counter = counter + total_tmp;
        }

        printf("Result: %d\n", counter);
        return 0;
}

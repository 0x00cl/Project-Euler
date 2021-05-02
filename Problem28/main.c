#include <stdio.h>

int main() {
        int total = 1;
        int tmp = 1;
        for (int i = 2; i < 1001; i =  i + 2) {
                for (int j = 0; j < 4; j++) {
                        tmp = tmp + i;
                        total = total + tmp;
                }
        }

        printf("Result: %d\n", total);
        return 0;
}

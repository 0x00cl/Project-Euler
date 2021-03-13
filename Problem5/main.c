#include <stdio.h>

int main() {
        int smallest_number = 0;
        for (int i = 1; i != smallest_number; i++) {
                int tmp = 0;
                for (int j = 1; j <= 20; j++) {
                        if (i % j != 0)
                                break;
                        else
                                tmp++;
                }
                if (tmp == 20) {
                        smallest_number = i;
                        break;
                }
        }

        printf("Result: %d\n", smallest_number);

        return 0;
}

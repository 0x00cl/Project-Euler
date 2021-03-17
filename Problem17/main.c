#include <stdio.h>

int main() {
        int num0to9[10] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
        int num10to19[10] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
        int num20to90[10] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};
        int num100to900[10] = {0, 10, 10, 12, 11, 11, 10, 12, 12, 11};
        int total = 0;
        for (int i = 1; i <= 1000; i++) {
                int number = i;
                int digits[4] = {0};
                for (int j = 0; j < 4; j++) {
                        digits[j] = number % 10;
                        number = number / 10;
                }

                if (digits[3] == 1) {
                        total = total + 11;
                        break;
                }
                total = total + num100to900[digits[2]];
                if (digits[2] != 0 && (digits[1] != 0 || digits[0] != 0))
                        total = total + 3;

                if (digits[1] == 1)
                        total = total + num10to19[digits[0]];
                else
                        total = total + num20to90[digits[1]] + num0to9[digits[0]];
        }
        
        printf("Result: %d\n", total);
        return 0;
}

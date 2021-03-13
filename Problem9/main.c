#include <stdio.h>
#include <math.h>

int find_triplet() {
        int number = 1000;
        for (int i = 0; i < number; i++) {
                for (int j = 0; j < i; j++) {
                        for (int k = 0; k < j; k++) {
                                if (i + j + k == number && pow(j, 2) + pow(k, 2) == pow(i, 2))
                                        return i * j * k;
                        }
                }
        }
        return 0;
}

int main() {
        int result = find_triplet();
        printf("Result: %d\n", result);

        return 0;
}

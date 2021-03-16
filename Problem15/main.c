#include <stdio.h>

long binomialCoeff(long n, long k) {
        if (k == 0)
                return 1;
        if (n <= k)
                return 0;

    return (n * binomialCoeff(n-1,k-1))/k;
}

int main() {
        long caminos = binomialCoeff(40,20);
        printf("Result: %ld\n", caminos);
        return 0;
}

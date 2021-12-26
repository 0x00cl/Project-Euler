#include <stdio.h>

int factorial(int number)
{
        int factorial_total = 1;
        for (int i = 1; i <= number; i++) {
                factorial_total *= i;
        }
        return factorial_total;
}

int main() {
        int  result = 0;
        for (int i = 3; i < 100000; i++) {
                int fact_digits = 0, number = i;
                while (number != 0) {
                        int digit = number % 10;
                        fact_digits += factorial(digit);
                        number /= 10;
                }
                if (fact_digits == i)
                        result += i;
        }
        printf("Result: %d\n", result);
        return 0;
}

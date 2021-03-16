#include <stdio.h>

int main() {
        int limit = 1000000;
        int longest_chain = 0;
        int longest_number = 0;
        for (long i = 1; i < limit; i++) {
                long tmp = i;
                int counter = 0;
                while (tmp != 1) {
                        if (tmp % 2 == 0)
                                tmp = tmp / 2;
                        else
                                tmp = 3 * tmp + 1;
                        counter++;
                }
                if (longest_chain < counter) {
                        longest_chain = counter;
                        longest_number = i;
                }
        }

        printf("Result: %d\n", longest_number);
        return 0;
}

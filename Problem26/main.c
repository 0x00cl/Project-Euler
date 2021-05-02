#include <stdio.h>

int main() {
        int longest = 0;
        for (int i = 2; i <= 1000; i++) {
                int remainders[1000] = {0};
                int index = 1;
                int pos = 0;

                while (remainders[index] == 0 && index != 0) {
                        remainders[index] = pos;
                        index = index * 10;
                        index = index % i;
                        pos++;
                }

                if (pos - remainders[index] > longest)
                        longest = pos - remainders[index];
        }

        printf("Result: %d\n", longest + 1);
        return 0;
}

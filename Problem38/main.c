#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_pandigital(char number_str[20])
{
        if (strchr(number_str, '0') != NULL)
                return 0;

        for (int i = 0; i < 9; i++){
                for (int j = 0; j < i; j++) {
                        if (number_str[i] == number_str[j])
                                return 0;
                }
        }

        return 1;
}


int main() {
        int largest_pan = 0, product = 0;
        for (int i = 1; i <= 9876; i++){
                char pan_str[20] = {0};
                for (int j = 1; j < 6; j++) {
                        char product_str[20] = {0};
                        product = i*j;
                        sprintf(product_str, "%d", product);
                        strcat(pan_str, product_str);
                        if (strlen(pan_str) == 9) {
                                if (is_pandigital(pan_str) && strtol(pan_str, NULL, 10) > largest_pan)
                                        largest_pan = strtol(pan_str, NULL, 10);
                                break;
                        } else if (strlen(pan_str) > 9){
                                break;
                        }
                }
        }

        printf("Result: %d\n", largest_pan);
        return 0;
}

#include <stdio.h>
#include <string.h>

int pandigital(int multd, int multr)
{
        char multd_str[12], multr_str[12], product_str[12];
        
        int product = multd * multr;
        if (product > 10000)
                return 0;

        sprintf(multd_str, "%d", multd);
        sprintf(multr_str, "%d", multr);
        sprintf(product_str, "%d", product);
        strcat(multd_str, multr_str);
        strcat(multd_str, product_str);
        
        if (strlen(multd_str) != 9)
                return 0;
        if (strchr(multd_str, '0') != NULL)
                return 0;

        for (int i = 0; i < 9; i++){
                for (int j = 0; j < i; j++) {
                        if (multd_str[i] == multd_str[j])
                                return 0;
                }
        }

        return product;
}

int main() {
        int max_number = 4938, total = 0, l = 0, flag = 1;
        int pan_products[20] = {0};

        for (int i = 1; i < max_number; i++) {
                for (int j = 1; j < i; j++) {
                        int tmp = pandigital(i, j);
                        if (tmp == 0)
                                continue;
                        for (int k = 0; pan_products[k] != 0; k++){
                                if (pan_products[k] == tmp) {
                                        flag = 0;
                                        break;
                                }
                        }
                        if (flag) {
                                total += tmp;
                                pan_products[l] = tmp;
                                l++;
                        }
                        flag = 1;
                }
        }

        printf("Result: %d\n", total);
        return 0;
}

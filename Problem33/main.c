#include <stdio.h>

int main() {
        int  result = 0, total_den = 1, total_num = 1;
        for (int i = 12; i < 100; i++) {
                for (int j = 11; j < i; j++) {
                        double units_i = i % 10;
                        double units_j = j % 10;
                        if (units_i == 0 && units_j == 0)
                                continue;
                                
                        double tens_j = j/10;
                        double tens_i = i/10;
                        if (units_j != tens_i)
                                continue;
                        double division = (double)j/(double)i;

                        double tu_division = tens_j/units_i;

                        if (division == tu_division) {
                                total_num *= units_i;
                                total_den *= tens_j;
                        }
                }
        }

        for (int i = total_den; i > 0; i--){
                if (total_num % total_den == 0)
                        result = total_num/total_den;
        }

        printf("Result: %d\n", result);
        return 0;
}

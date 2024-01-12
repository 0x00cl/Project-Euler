#include <stdio.h>
#include <math.h>

int main() {
        int perimiters[1001] = {0};
        int perimiter = 0;
        double c = 0.0;

        for (int i = 1; i < 500; i++) {
                for(int j = 1; j <= i; j++){
                        c = sqrt(pow(i, 2) + pow(j, 2));
                        if (ceil(c) != floor(c)) {
                                continue;
                        }
                        perimiter = i + j + c;
                        if (perimiter > 1000){
                                break;
                        }
                        perimiters[perimiter]++;
                }
        }

        int max_solutions = 0;
        for (int i = 0; i <= 1000; i++) {
                if (perimiters[i] > max_solutions) {
                max_solutions = perimiters[i];
                perimiter = i;
                }
        }

        printf("Result: %d\n", perimiter);
        return 0;
}
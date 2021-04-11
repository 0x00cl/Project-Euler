#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
        FILE *fp;
        int triangle[15][15];
        char buff[255];

        fp = fopen("triangle.txt", "r");
        if (fp == NULL) {
                printf("Error opening file\n");
                return(1);
        }

        for (int i = 0; fgets(buff, 255, fp) != NULL; i++) {
                char* token = strtok(buff, " ");
                for (int j = 0; j < 15; j++) {
                        if (token == NULL) {
                                triangle[i][j] = 0;
                        } else {
                                char *end;
                                triangle[i][j] = strtol(token, &end, 10);
                                token = strtok(NULL, " ");
                        }
                }
        }

        fclose(fp);

        for (int i = 13; i >= 0; i--) {
                for (int j = 0; j <= i; j++) {
                        int max_number;

                        if (triangle[i + 1][j] > triangle[i + 1][j + 1])
                                max_number = triangle[i + 1][j];
                        else
                                max_number = triangle[i + 1][j + 1];

                        triangle[i][j] = triangle[i][j] + max_number;
                }
        }

        printf("Result: %d\n", triangle[0][0]);
        return 0;
}

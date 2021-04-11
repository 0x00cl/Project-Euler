#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
        FILE *fp;
        char buff[47000];
        char names[5163][100];
        int aux = 0;
        int total = 0;

        fp = fopen("p022_names.txt", "r");
        if (fp == NULL) {
                printf("Error opening file\n");
                return(1);
        }

        if (fgets(buff, 47000, fp) == NULL)
                printf("Reached EOF\n");

        char* token = strtok(buff, ",");
        while (token != NULL) {
                int j = 0;
                while (token[j] != '\0') {
                        if (token[j] == 34)
                                token[j] = 3;
                        j++;
                }
                strcpy(names[aux], token);
                token = strtok(NULL, ",");
                aux++;
        }
        fclose(fp);

        for (int i = 0; i < 5163; i++) {
                for (int j = 0; j < 5162; j++) {
                        for (int k = 0; k < 100; k++) {
                                if (names[j][k] > names[j + 1][k]) {
                                        char tmp[100];
                                        strcpy(tmp, names[j]);
                                        strcpy(names[j], names[j + 1]);
                                        strcpy(names[j + 1], tmp);
                                        break;
                                } else if (names[j][k] < names[j + 1][k]) {
                                        break;
                                }
                        }
                }
        }

        for (int i = 0; i < 5163; i++) {
                int pos = i + 1;
                int name_length = strlen(names[i]) - 1;
                int sum = 0;
                for (int j = 1; j < name_length; j++) {
                        sum = sum + names[i][j] - 64;
                }
                total = total + (sum * pos);
        }

        printf("Result: %d\n", total);
        return 0;
}

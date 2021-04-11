#include <stdio.h>

int main() {
        int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int weekday_offset = 1;
        int counter = 0;
        for (int i = 1901; i <= 2000; i++) {
                if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
                        days_month[1] = 29;

                for (int j = 0; j < 12; j++) {
                        if (weekday_offset == 6)
                            counter++;

                        if (days_month[j] == 31)
                                weekday_offset = weekday_offset + 3;
                        else if (days_month[j] == 30)
                                weekday_offset = weekday_offset + 2;
                        else if (days_month[j] == 29)
                                weekday_offset = weekday_offset + 1;

                        weekday_offset = weekday_offset % 7;
                }

                days_month[1] = 28;
        }

        printf("Result: %d\n", counter);
        return 0;
}

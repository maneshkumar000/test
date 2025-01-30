#include <stdio.h>

int 
main() {
    float rainfall[7];
    float totalRainfall = 0;
    int noRainDays[7];
    int noRainCount = 0;

    printf("Enter rainfall amounts for 7 days (in mm):\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &rainfall[i]);
        totalRainfall += rainfall[i];
        if (rainfall[i] == 0) {
            noRainDays[noRainCount] = i + 1;
            noRainCount++;
        }
    }
    printf("Total rainfall for the week: %.2f mm\n", totalRainfall);

    if (noRainCount > 0) {
        printf("Days with no rainfall: ");
        for (int i = 0; i < noRainCount; i++) {
            printf("%d, ", noRainDays[i]);
        }
        printf("\n");
    } else {
        printf("All days had some rainfall.\n");
    }

    return 0;
}
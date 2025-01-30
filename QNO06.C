#include <stdio.h>

int main() {
    float distances[7];
    float totalDistance = 0;
    float shortestDistance;
    int shortestDay = 1;

    // Input distances for 7 days
    printf("Enter distances traveled for 7 days (in km):\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &distances[i]);
        totalDistance += distances[i];

        // Initialize shortestDistance with the first day's distance
        if (i == 0) {
            shortestDistance = distances[i];
        }
        if (distances[i] < shortestDistance) {
            shortestDistance = distances[i];
            shortestDay = i + 1;
        }
    }
    printf("Total distance covered in the week: %.2f km\n", totalDistance);
    printf("Day with the shortest distance traveled: Day %d (%.2f km)\n", shortestDay, shortestDistance);

    return 0;
}
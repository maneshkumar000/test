#include <stdio.h>

float avgTemp(float temps[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += temps[i];
    }
    return sum / n;
}

void highLowTemp(float temps[], int n, int *highD, int *lowD, float *highT, float *lowT) {
    *highT = temps[0];
    *lowT = temps[0];
    *highD = 1;
    *lowD = 1;

    for (int i = 1; i < n; i++) {
        if (temps[i] > *highT) {
            *highT = temps[i];
            *highD = i + 1;
        }
        if (temps[i] < *lowT) {
            *lowT = temps[i];
            *lowD = i + 1;
        }
    }
}

int main() {
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);

    float temps[n];

    for (int i = 0; i < n; i++) {
        printf("Enter temp for day %d: ", i + 1);
        scanf("%f", &temps[i]);
    }

    float avg = avgTemp(temps, n);
    printf("Average temp: %.2f\n", avg);

    int highD, lowD;
    float highT, lowT;
    highLowTemp(temps, n, &highD, &lowD, &highT, &lowT);

    printf("Highest temp: %.2f on day %d\n", highT, highD);
    printf("Lowest temp: %.2f on day %d\n", lowT, lowD);

    return 0;
}

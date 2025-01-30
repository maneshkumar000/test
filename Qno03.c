#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char dob[11];
    char password[10];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your date of birth (DD-MM-YYYY): ");
    scanf("%s", dob);

    char firstThreeLetters[4];
    strncpy(firstThreeLetters, name, 3);
    firstThreeLetters[3] = '\0';

    char dayAndMonth[6];
    strncpy(dayAndMonth, dob, 5);
    dayAndMonth[5] = '\0';

    sprintf(password, "%s%s", firstThreeLetters, dayAndMonth);

    printf("Generated Password: %s\n", password);

    return 0;
}
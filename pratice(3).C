#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    char dob[11];
    char password[11];
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your date of birth (DD-MM-YYYY):");
    scanf("%s", dob);

    char first_four_letter[5];
    strncpy(first_four_letter,name,4);
    first_four_letter[4] ='\0';

    char date_and_month[6];
    strncpy(date_and_month, dob ,5);
    date_and_month[5]='\0';

    sprintf(password,"%s%s",first_four_letter,date_and_month);
    printf("Generated password is %s\n", password);
    return 0;
}
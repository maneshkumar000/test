#include<stdio.h>
#define max_attempts 3
#define roll 241082
int main(){
    int roll_number;
    char name[20];
    for(int attempt=1;attempt<=max_attempts;attempt++){
        printf("Enter your name:");
        scanf("%s", &name);
        printf("Enter your roll number:");
        scanf("%d", &roll_number);
        if(roll_number==roll){
            printf("login sucessfull welcome. %s\n", name);
         return 0;}
        else{
            printf("Incorrect roll number. attempt left %d\n",max_attempts-attempt);
        }

    }
    printf("All attempts are wrong.you are blocked now");
    return 0;
}

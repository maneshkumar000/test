#include<stdio.h>
#include<string.h>

#define max_attempt 3
#define correct_name "Manesh"

int main(){
    char name[20];
    for(int attempts = 1; attempts<= max_attempt; attempts++){
        printf("Enter your name:");
        scanf("%s", name);
        if(strcmp(name, correct_name)==0){
            printf("Login successfully welcome %s.\n",name);
            return 0;
        }else{
            printf("incorrect name. attempts left %d.\n",max_attempt-attempts);
        }
        }
        printf("All attempts are fail. you are locked now.\n");

    return 0;
}
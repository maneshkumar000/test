#include<stdio.h>
int main(){
    float sales[7];
   float total = 0;
    float max = 0;
    int day = 0;
    printf("Enter sales for 7 days:\n");
    for(int i = 0; i<7; i++){
        printf("Day %d:", i+1);
        scanf("%f",&sales[i]);
        total = total+sales[i];
        if(sales[i]>max){
            max = sales[i];
            day = i + 1;
        }
    }
    printf("\n Total sales %.2f\n",total);
    printf("Higest sale on day %d: %.2f",day,max);
    return 0 ;
}

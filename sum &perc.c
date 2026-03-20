#include<stdio.h>
int main(){
    float marks [5];
    float sum = 0, percentage ;
    int i;

    printf("Enter mars of 5 subjects :\n");
    for(i=0; i<5; i++){
        printf("subject %d:", i+1);
        scanf("%f",&mars[i]);
        sum += mars[i];

    }
    percentage = (sum / 500)*100;
printf("\nTotal Mars = %.2f",sum)    ;
printf("\nPercentage = %.2f%%",percentage);

return 0;

    
}
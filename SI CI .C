#include<stdio.h>
int main()
{
    float p,r,t;
    printf("enter the principal amount =");
    scanf("%f",&p);
    
    printf("enter the rate of interest =");
    scanf("%f",&r);
    
    printf("enter the time =");
    scanf("%f",&t);
    float SI = (p*r*t)/100;
    printf("%f",SI);
return 0;

}



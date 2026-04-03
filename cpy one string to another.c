#include<stdio.h>

int main()
{
    char source[100]="Hellow ,World!";
    char destination[100];
    strcpy(destination,source);
    printf("Source string:%s\n",source);
    printf("Destination STRING : %s\n ",destination);
    
    return 0;
}

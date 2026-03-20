#iinclude <stdio.h>
int main()
{
    int sumeven = 0, sumodd = 0;
    printf("Enter N:");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        if (i%2==0)
        sumeven += i;
    else
    sumodd += i;
    }
    printf("Sum of even numbers = %d\n",sumeven);
    printf("Sum of odd numbers = %d\n",sumodd);
    return 0;
}
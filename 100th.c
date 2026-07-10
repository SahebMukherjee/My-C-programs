#include<stdio.h>

int main()

{
    int x[100], n, i, sum = 0;

    printf("How many numbers you want to input: ");
    scanf("%d",&n);

    for(i = 0; i <= (n - 1); i++)
    {
        printf("Enter any value: ");
        scanf("%d",&x[i]);
    }

    for (i = 0; i <= (n - 1); i++)
    
    sum += x[i];

    printf("sum = %d",sum);

    return 0;
}
#include<stdio.h>

int main()

{
    int x[100], n, i, evsum = 0, oddsum = 0;

    printf("How may numbers you want to input: ");
    scanf("%d", &n);

    for(i = 0; i <= (n - 1); i++)
    {
        printf("Enter any value: ");
        scanf("%d", &x[i]);
    }

    for(i = 0; i <= (n - 1); i++)

    {
        if(x[i] % 2 == 0)

        evsum += x[i];

        else

        oddsum += x[i];
    }

    printf("Sum of all even numbers = %d",evsum);

    printf("\nSum of all odd numbers = %d",oddsum);

    return 0;
}
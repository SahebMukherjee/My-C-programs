#include<stdio.h>

int main()

{
    int n, x, max;

    printf("How many numbers you want to input: ");
    scanf("%d",&n);

    if(n == 0 || n == 1)

    printf("Enter > 1");

    else

    {
        printf("Enter any value: ");
        scanf("%d",&x);

        max = x;

        n = n-1;

        do
        {
           printf("Enter any value: ");
           scanf("%d",&x);

           if(x > max)

           max = x;

           n = n - 1;
        } while (n);

        printf("Largest = %d", max);
        
    }

    return 0;
}
#include<stdio.h>

int main ()

{
    int n, i, fact = 1;

    printf("Enter any integer <8: ");
    scanf("%d",&n);

    if(n<0 || n>7)

    printf("Factorial not possible");

    else
    {
        for (i = n; i >= 1; i--)

        fact = fact * i;

        printf("factorial value of %d = %d",n,fact);
    }

    return 0;
}
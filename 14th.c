#include <stdio.h>

int main()

{
    int n, i = 2, sum = 0;

    printf ("enter a positive number (n):");
    scanf ("%d",&n);

    while (i <= n)

    {
       sum = sum + i;

       i = i + 2;

    }
    printf ("sum of all even numbers from 1 to n are = %d",sum);

    return 0;
}
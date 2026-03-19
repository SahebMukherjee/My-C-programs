#include <stdio.h>

int main()

{
    int m, n, sum = 0;

    printf ("enter the value of m: ");
    scanf ("%d", &m);

    printf ("enter the value of n: ");
    scanf ("%d", &n);

    while (m <= n)

    {
        sum = sum + m;

        m = m + 2;

    }

    printf ("sum of odd numbers from m to n =%d",sum);

    return 0;
}
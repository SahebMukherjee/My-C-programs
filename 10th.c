#include <stdio.h>
int main() 

{

    int m,n,sum = 0,r;

    printf("enter any number:");
    scanf ("%d",&n);

    m = n;

    while (n != 0)
    {
        r = n % 10;

        sum += r;

        n = n/10;
    }

    printf("sum of digits of %d = %d\n", m,sum);

    return 0;
}
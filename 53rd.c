#include <stdio.h>

int main()

{

    int m, n, r, sum = 0;

    printf("Enter any three digits value:");

    scanf("%d",&n);

    m = n;

    r = n % 10;

    sum = sum + r;

    n = n / 10;

    r = n % 10;

    sum = sum + r;

    n = n / 10;

    r = n % 10;

    sum = sum + r;

    printf("Sum of Digits of %d = %d",m,sum);

    return 0;
}
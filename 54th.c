#include <stdio.h>

int main()

{
    int a, b, max;

    printf("Enter value for a and b:");

    scanf("%d,%d",&a,&b);

    max = (a > b)? a:b;

    printf("largest number = %d",max);

    return 0;
}
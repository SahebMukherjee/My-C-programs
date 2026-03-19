#include <stdio.h>

int main()

{
    int m, n, i;

    printf("enter the value of n:");
    scanf("%d",&n);

    for(i = 2; i <= n; i += 2)

    printf("\n%d",i);

    return 0;
}
#include <stdio.h>

int main()

{
    int i, m, n;

    printf("enter the value of m: ");
    scanf("%d",&m);

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i = n; i >= m; i--)

    printf("\n %d",i);

    return 0;
}
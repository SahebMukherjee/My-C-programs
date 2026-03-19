#include <stdio.h>

int main()

{
    int i, m, n;

    printf("enter the value of m:");
    scanf("%d",&m);

    printf("enter the value of n:");
    scanf("%d",&n);

    printf("Natural numbers in reverse order from %d to %d are:\n",m,n);

    for (i = n; i >= m; i--)

    {
        printf("\n%d",i);

    }
    
    return 0;

}
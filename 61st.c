#include <stdio.h>

int main()

{
    int a, b, c, max;

    printf("Enter three numbers:");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a > b)
    
    {
        max = a;
    }

    else

    {
        max = b;
    }

    if(max > c)

    {
        printf("Largest = %d",max);
    }

    else

    {
        printf("Largest = %d",c);
    }

    return 0;
}
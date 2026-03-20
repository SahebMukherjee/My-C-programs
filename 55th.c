#include <stdio.h>

int main()

{

    int a, b, c, min;

    printf("Enter value for a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);

    min = (a < b)? (a < c)? a:c: (b < c)? b:c;

    printf("Smallest no = %d",min);

    return 0;
}

#include <stdio.h>

int main()

{

    int a, b;

    float c;

    printf("Enter the value of (a):");
    scanf("%d",&a);

    printf("Enter the value of (b):");
    scanf("%d",&b);

    c = (float) a/b;

    printf("Division of %d and %d = %f",a,b,c);

    return 0;
    
}
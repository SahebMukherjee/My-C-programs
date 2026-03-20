#include <stdio.h>

int main()

{
    int a;

    printf("Enter any value:");
    scanf("%d",&a);

    (a % 2)? printf("Odd No"):printf("Even No");

    return 0;
}
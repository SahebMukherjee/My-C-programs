#include <stdio.h>

int main()

{
    int a;

    printf("Enter any value:");
    scanf("%d",&a);

    (a % 2 == 0)? printf("Even No"):printf("Odd No");

    return 0;
}
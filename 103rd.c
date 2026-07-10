#include<stdio.h>

int main()

{
    int x[] = {10, 20, 30, 40, 100, 200, 300};

    int y[7], i, j = 0;

    for(i = 0; i <= 6; i++)

    y[j++] = x[i];

    for(i = 0; i <= 6; i++)

    printf("\n%d",y[i]);

    return 0;
}
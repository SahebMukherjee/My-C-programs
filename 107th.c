#include<stdio.h>

int main()

{
    int x[5], sum, i, j, n;

    printf("How many numbers you want to input: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++)

    {
        printf("Enter any values: ");
        scanf("%d", &x[i]);
    }

    printf("Enter any sum values: ");
    scanf("%d",&sum);

    for(i = 0; i < n; i++)

    {
        for(j = i + 1; j < n; j++)

        if(x[i] + x[j] == sum)

        printf("x[%d], x[%d]\n",i,j);
    }

    return 0;
}
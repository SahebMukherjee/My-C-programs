#include<stdio.h>

int main()

{
    int a[100], n, i, fl, sl;

    printf("How many numbers you want to input: ");
    scanf("%d", &n);

    for(i = 0; i <= (n - 1); i++)

    {
        printf("Enter any numbers: ");

        scanf("%d", &a[i]);
    }

    if(a[0] > a[1])

    {
        fl = a[0];

        sl = a[1];
    }

    else

    {
        fl = a[1];

        sl = a[0];
    }

    for(i = 2; i <= (n - 1); i++)

    {
        if(a[i] > fl)

        {
            sl = fl;

            fl = a[i];
        }

        else if(a[i] > sl)

        sl = a[i];
    }

    printf("Largest = %d", fl);

    return 0;
}
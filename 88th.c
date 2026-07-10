#include <stdio.h>

int main()

{
    int n, i, flag;

    flag = 1;

    printf("Enter any no: ");

    scanf("%d",&n);

    for(i = 2; i <= (n-1); i++)

    {
        if(n % i == 0)
        {
            flag = 0;

            break;
        }
    }

    if (flag)

    printf("%d is prime no", n);

    else
    printf("%d is not a prime no", n);

    return 0;
}
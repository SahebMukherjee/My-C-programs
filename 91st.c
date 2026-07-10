#include <stdio.h>

#include <math.h>

int main()

{
    int m, n, flag, i, num;

    printf("Enter starting range: ");

    scanf("%d", &m);

    printf("Enter ending range: ");

    scanf("%d", &n);

    for(num = m; num <= n; num++)

    {
        flag = 1;

        for(i = 2; i <= sqrt(num); i++)

        {
            if(num % i == 0)

            {
                flag = 0;

                break;
            }
        }

        if(flag)

        printf("%d\n", num);
    }

    return 0;
}
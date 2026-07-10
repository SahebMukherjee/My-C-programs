#include <stdio.h>

int main()

{
    int a = 0, b = 1, s, n;

    printf("How many terms you want: ");
    scanf("%d", &n);

    printf("%d\n %d", a,b);

    while((n - 2) >= 1)
    
    {
        s = a + b;

        printf("\n%d",s);

        a = b;

        b = s;

        n--;
    }

    return 0;
}
#include <stdio.h>

int main()

{
    int n1, n2, m1, m2, lcm;

    printf("Enter two numbers: ");
    scanf("%d,%d",&n1,&n2);

    n1 = (n1 > 0) ? n1 : -n1;

    n2 = (n2 > 0) ? n2 : -n2;

    m1 = n1;

    m2 = n2;

    while (n1 != n2)

    {
       if (n1 > n2)

       n1 = n2;

       else

       n2 = n1;
    }

    lcm = (m1 * m2) / n1;
    printf("LCM of %d and %d = %d", m1, m2, lcm);

    return 0;
}
#include <stdio.h>

int main()

{
    int i, m, n;

    printf("Enter the value of m:");
    scanf("%d",&m);

    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("All natural numbers from %d to %d are:\n",m,n);

    for(m = 1; m <= n; m++)
    
    {
       if (m % 2 == 0)

        {
         
          printf("\n%d",m);
          
        }
    }
    return 0;

}
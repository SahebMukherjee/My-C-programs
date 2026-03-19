#include <stdio.h>

int main()

{
   int i, n;

   printf("Enter the value of (n): ");
   scanf("%d",&n);

   i = 1;

   while(i <= n)
    {
      
        printf("%d\n",i);

        i++;

    }

    printf("Enter the value of 1 - %d: ");

    return 0;
    
}
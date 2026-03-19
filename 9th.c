#include <stdio.h>

int main ()

{
    int m,n,sum = 0;

    printf ("Enter value of m and n: ");
    scanf ("%d and %d", &m,&n);

     while (m <= n)

    {
     
     sum = sum + m;
     
     m++;
    
    }

 printf ("sum of all natural numbers from are: %d\n",sum);
 
  return 0;
    
}
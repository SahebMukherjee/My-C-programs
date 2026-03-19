#include <stdio.h>

int main()

{
  int n,i = 1;

  printf ("enter the value of n:");
  scanf ("%d",&n);

  while ( n >= i)

    {
      printf ("%d\n",n); 
    
      n--;
    }

  return 0;
}
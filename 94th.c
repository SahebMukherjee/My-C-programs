#include <stdio.h>

#include <ctype.h>

int main ()

{
    char ans;

    int m, n, choice;

    do
    {
      printf("1. Addition\n 2. Substruction\n 3. Multiplication\n 4. Exit\n");

      scanf("%d", &choice);
      
        
     if(choice == 1)

        {
           printf("Enter two numbers: ");

           scanf("%d, %d", &m, &n);
 
           printf("\n Addition = %d", m + n);
        }

      else if(choice == 2)

        {
          printf("Enter two numbers: ");

          scanf("%d, %d", &m, &n);
   
          printf("\n Substruction = %d", m - n);
        }

      else if(choice == 3)

        {
           printf("Enter two numbers: ");

           scanf("%d, %d", &m, &n);

           printf("\n Multiplication = %d", m * n);
        }

      else if(choice == 4)

        {
           break;
        }

      else

        {
           printf("Invalid choice....");
        }

      printf("\n want to continue (Y/N) ?: ");

      scanf("%c", &ans);

    } 

    while (toupper(ans) == 'Y');

    return 0;
}
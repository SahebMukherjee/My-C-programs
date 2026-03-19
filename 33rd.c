#include <stdio.h>

int main()

{
    int i;

    for(i = 1; ;)

    {
       printf("\n%d",i);

        i++;

        if(i > 10)

        break;
    }

    return 0;
}
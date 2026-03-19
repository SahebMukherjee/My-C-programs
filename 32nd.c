#include <stdio.h>

int main()

{
    int i;

    for(i = 1; ;)

    {
        if(i > 10)

        break;

        printf("\n%d",i);

        i++;
    }

    return 0;
}
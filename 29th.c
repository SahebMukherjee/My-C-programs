#include <stdio.h>

int main()

{
    int i;

    for(i = 1; ; i++)

    {
        if(i > 10)

        break;

        printf("\n%d",i);
    }

    return 0;
}
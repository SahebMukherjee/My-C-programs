#include <stdio.h>

int main()

{
    int i = 1;

    for(; ; i++)

    {
        if(i > 10)

        break;

        printf("\n%d",i);
    }

    return 0;
}
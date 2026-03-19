#include <stdio.h>

int main()

{
    float c, f;

    printf("Enter celsius temp:");
    scanf("%f",&c);

    f = c * 9 / 5 + 32;

    printf("Equivalent fahrenhiet temp = %f",f);

    return 0;
}
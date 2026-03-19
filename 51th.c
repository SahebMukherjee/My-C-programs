#include <stdio.h>

int main()

{
    int f;

    float c;

    printf("Enter the fahrenhiet temp:");
    scanf("%d",&f);

    c = 5 * ((float)f - 32) / 9;

    printf("Equivalent celsius temp = %f",c);

    return 0;
}
#include <stdio.h>

int main()

{
    int age;

    char ms, gen;

    printf("Enter marital status (m/u): ");
    scanf("%c", &ms);

    printf("Enter gender (m/f): ");
    scanf("%c", &gen);

    printf("Enter age: ");
    scanf("%d", &age);

    if(ms == 'm' || (gen == 'm' && age > 30) || (gen == 'f' && age > 25))

    printf("Driver insured");

    else

    printf("Driver not insured");

    return 0;
}
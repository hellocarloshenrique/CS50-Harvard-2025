#include <stdio.h>

int main(void)
{
    float x;
    printf("x: ");
    scanf("%f", &x);

    float y;
    printf("y: ");
    scanf("%f", &y);

    float z = x / y;

    printf("resultado e: %f\n", z);
}
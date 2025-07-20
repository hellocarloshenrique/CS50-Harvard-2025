#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);

    int y;
    printf("y: ");
    scanf("%i", &y);

    int z = x + y;

    printf("a soma e: %i\n", z);
}
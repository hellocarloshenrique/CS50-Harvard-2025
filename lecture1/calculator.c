#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);

    int y;
    printf("y: ");
    scanf("%i", &y);

    int z = x / y;

    // posso adicionar o flaot apenas no resoltado sem alterar o int nos blocos
    printf("resultado e: %f\n", (float) z);
}
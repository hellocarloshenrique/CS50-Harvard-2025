#include <stdio.h> // Inclui a biblioteca padrao de entrada e saida
/*
#include <cs50.h>
int main() {
    printf("Ola, Carlos! Meu primeiro programa em C no Linux Mint!\n");
    return 0; // Indica que o programa terminou com sucesso
}
*/


void meow(int n);

int main(void)
{
    int n = get_int("Number: ");
    meow(n);
}

void meow (int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("meow\n");
    }
    
}

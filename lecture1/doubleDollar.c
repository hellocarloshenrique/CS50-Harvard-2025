#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int dollar = 1;

    while (true)
    {
        char challenger;
        
        printf("here's $%i. Double it and give it to the next person? [Y/N] ", dollar);
        scanf(" %c", &challenger);

        if (challenger == 'y')
        {
            dollar *= 2;
        }
        else
        {
            break;
        } 
    }
    printf("here's $%i.\n", dollar);
}
#include<stdio.h>

void meow (void);

int main ()
{
    for (int i = 0; i < 5; i++)
    {
        meow();
    }
    
    return 0;
}


void meow (void)
{
    printf("meow\n");
}
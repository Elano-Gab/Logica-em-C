#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("digite um numero: ");
    scanf("%i", &num);

    for(int linha = 0; linha < num; linha++)
    {
        for(int coluna = 0; coluna < linha + 1; coluna++)
        {
            printf("*");
        }
        printf("\n");
    }
}

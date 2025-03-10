#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("digite um numero: ");
    scanf("%i", &num);

    for(int linha = 1; linha <= num; linha++)
    {
        for(int coluna = num; coluna >= linha; coluna--)
        {
            printf("*");
        }
        printf("\n");
    }
}

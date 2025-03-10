#include <stdio.h>

int main()
{
    int num;

    printf("digite um numero: ");
    scanf("%i", &num);


        for(int linha = 0; linha < num; linha++)
        {
            for(int coluna = 0; coluna < linha ; coluna++)
            {
                printf(" ");
            }
            for(int asterisco = 0; asterisco < num; asterisco++)
            {
                printf("*");
            }
            printf("\n");
        }

}

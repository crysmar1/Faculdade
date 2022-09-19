#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Escreva um programa de repetição que assuma uma condição de saída com ca- ractere e 
    acumule os valores inseridos em cada iteração da repetição. */

    int x; int cont=0; int total=0;
    char letra;

    while (letra=getchar() != 'q')
    {
        printf("Digite um numero: \n");

        scanf("%d", &x);
        fflush(stdin);
        cont++;

        total = total + x;
    }

    printf("Parando...\n");
    printf("Repeticoes = %d e total = %d.\n", cont, total);

    return 0;
}

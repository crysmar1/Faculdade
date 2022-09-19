#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Escrever um programa que imprime "FATEC" na tela enquanto o 
    caractere "q" não for digitado e conte qtas repeticoes foram realizadas */

    int cont=0; 
    char letra;

    while (letra=getchar() != 'q') //funcao getchar() captura o caractere digitado
    {
        printf("FATEC...\n");
        fflush(stdin);

        cont++;
    }
    
    printf("Parando...\n");
    printf("Repeticoes = %d\n", cont);

    return 0;
}

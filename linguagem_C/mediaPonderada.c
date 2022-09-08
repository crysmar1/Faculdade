#include <stdio.h>

main()
{
    float nota1, nota2, nota3;
    int peso1, peso2, peso3;

    printf("Digite a primeira nota: ");
    scanf("\n%f", &nota1);
    printf("\nDigite o peso da primeira nota: ");
    scanf("\n%d", &peso1);
    printf("Digite a segunda nota: ");
    scanf("\n%f", &nota2);
    printf("\nDigite o peso da segunda nota: ");
    scanf("\n%d", &peso2);
    printf("\nDigite a terceira nota: ");
    scanf("\n%f", &nota3);
    printf("\nDigite o peso da terceira nota: ");
    scanf("\n%d", &peso3);

    printf("\nA media ponderada eh %.2f", (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3));
}
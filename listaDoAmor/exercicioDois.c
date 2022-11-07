#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um algoritmo que leia três números inteiros e positivos
(A, B, C) e calcule a seguinte expressão: D = (R + S) / 2, onde
R = (A + B)²
S = (B + C)² */

int main()
{
    int A, B, C;

    float R, S, D;

    printf("### Inicio ###\n");
    printf("Digite os valores para A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    R = pow((A + B), 2);
    S = pow((B + C), 2);

    D = (R + S) / 2;

    printf("O valor de D = %.0f", D);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
/*Construa um algoritmo que, tendo como dados de entrada dois 
pontos quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a distância 
entre eles. A fórmula que efetua tal cálculo é: d =  √(x2 - x1)² + (y2 - y1)² */

int main()
{
    int x1, y1, x2, y2;
    float d;

    printf("### Calcular a distancia entre dois pontos ### \n");

    printf("Digite o valor do ponto A(X1, Y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Digite o valor do ponto B(X2, Y2): ");
    scanf("%d %d", &x2, &y2);

    d = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    // d = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
    // d = sqrt((x2 - x1) ^ 2 + (y2 - y1) ^ 2);

    printf("A distancia entre os pontos eh %.2f", d);

    return 0;
}

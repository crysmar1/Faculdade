#include <stdio.h>

main()
{
    /* code detalhado para fins didaticos */

    float alturaDegrau, alturaEscada, degraus;

    printf("Informe a altura do degrau, em centimetros: ");
    scanf("%f", &alturaDegrau);
    printf("Informe a altura da escada, em metros: ");
    scanf("%f", &alturaEscada);
    
    degraus = (alturaEscada * 100) / alturaDegrau;
    printf("A quantidade de degraus eh: %.2f", degraus);

    return 0;
}
#include <stdio.h>

int main()
{
    /* code detalhado para fins didaticos */
    float salarioInicial, salarioFinal;
    
    printf("Lucas");

    printf("Informe seu rendimento: ");
    scanf("%f", &salarioInicial);

    salarioFinal = salarioInicial + (salarioInicial * 0.25);

    printf("Salario atual eh: R$ %.2f", salarioFinal);
    return 0;
}

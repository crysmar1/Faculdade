#include<stdio.h>

int main()
{
    /* code detalhado para fins didaticos */
    float salarioBase, salarioGratificado, desc, salarioFinal;
    const float gratificacao = 0.05;
    const float imposto = 0.07;

    printf("Informe seu rendimento base: ");
    scanf("%f", &salarioBase);

    salarioGratificado = salarioBase + (salarioBase * gratificacao);
    desc = (salarioBase * imposto);

    salarioFinal = salarioGratificado - desc;

    printf("\nSalario gratificado eh R$ %.2f", salarioGratificado);
    printf("\nDesconto eh R$ %.2f ", desc);
    printf("\nSeu rendimento eh R$ %.2f", salarioFinal);
    return 0;
}

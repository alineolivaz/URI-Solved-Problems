#include <stdio.h>
 
int main() {
    
    char NOME;
    double SALARIO, VENDAS;

    scanf("%s", &NOME);
    scanf("%lf %lf", &SALARIO, &VENDAS);

    VENDAS = ((15 * VENDAS) / 100) + SALARIO;

    printf("TOTAL = R$ %.2lf\n", VENDAS);

    return 0;
    
}
#include <stdio.h>
 
int main() {
    
    int C1, N1, C2, N2;
    double V1, V2, PAGAR;

    scanf("%d %d %lf", &C1, &N1, &V1);
    scanf("%d %d %lf", &C2, &N2, &V2);

    PAGAR = (N1 * V1) + (N2 * V2);

    printf("VALOR A PAGAR: R$ %.2lf\n", PAGAR);

    return 0;
    
}
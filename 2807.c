#include <stdio.h>
int main(){
    int n, fib1, fib2, fib3, j, i;

    scanf("%d", &n);
    for(j=(n-1); j>0; j--){ // j=n-1 para não contar o zero como unidade

        fib1 = 0;
        fib2 = 1;
        fib3 = 0; // declarando valor às variáveis e reinicializando elas a cada loop

        for(i = 0; i < j; i++){ //contador igual a zero, vai fazer o loop até chegar a j
            fib3 = fib1 + fib2;
            fib1 = fib2; // fib1 assume valor de 1
            fib2 = fib3; // fib2 assume o valor somado acima
        }
        printf("%d ", fib3); //imprime dentro de apenas de 1 loop
   }
   printf("%d\n", 1); // o último (ou primeiro) 1 da sequência
}

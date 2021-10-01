#include<stdio.h>
#include<math.h>

double circ(double raio){

    double resultado;
    double n = 3.14159;
    resultado = n * (raio * raio);
    return resultado;
}
int main(){
    double raio, resultado;

    scanf ("%lf", &raio);
    resultado = circ(raio);
    printf ("A=%.4lf\n", resultado);

    return 0;
}

#include<stdio.h>
#include<math.h>

double volume(double raio){

    double resultado;
    double n = 3.14159;
    resultado =  (4.0/3) * n * pow(raio, 3);
    return resultado;
}
int main(){
    double raio, resultado;

    scanf ("%lf", &raio);
    resultado = volume(raio);
    printf ("VOLUME = %.3lf\n", resultado);

    return 0;
}

#include<stdio.h>
#include<math.h>

double distancia(double x1, double y1, double x2, double y2){

    double resultado;
    resultado =  sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return resultado;
}
int main(){
    double x1, y1, x2, y2, resultado;

    scanf ("%lf %lf", &x1, &y1);
    scanf ("%lf %lf", &x2, &y2);
    resultado = distancia(x1, y1, x2, y2);
    printf ("%.4lf\n", resultado);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float sal, reaj;
    int perc;

    scanf("%f", &sal);

    if (sal >= 0 && sal <= 400){
        perc = 15;
        reaj = (15 * sal)/100;

    }
    if (sal > 400 && sal <= 800){
        perc = 12;
        reaj = (12 * sal)/100;

    }
    if (sal > 800 && sal <= 1200){
        perc = 10;
        reaj = (10 * sal)/100;

    }
    if (sal > 1200 && sal <= 2000){
        perc = 7;
        reaj = (7 * sal)/100;

    }
    if (sal > 2000){
        perc = 4;
        reaj = (4 * sal)/100;

    }


    printf("Novo salario: %.2f\n", sal + reaj);
    printf("Reajuste ganho: %.2f\n", reaj);
    printf("Em percentual: %d %%\n", perc);
    return 0;

}

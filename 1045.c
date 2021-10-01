#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float A, B, C, coiso;

    scanf("%f %f %f", &A, &B, &C);
    if (A < B){
            coiso = A; A = B; B = coiso;
    }
    if (B < C){
            coiso = B; B = C; C = coiso;
    }
    if (A < B){
            coiso = A; A = B; B = coiso;
    }


    if (A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
    if (pow(A, 2) == pow(B, 2) + pow(C, 2)){
        printf("TRIANGULO RETANGULO\n");
    }
    else if (pow(A, 2) > pow(B, 2) + pow(C, 2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if (pow(A, 2) < pow(B, 2) + pow(C, 2)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B && B == C){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (A == B || A == C || B == C){
        printf("TRIANGULO ISOSCELES\n");
    }
    }

    return 0;

}

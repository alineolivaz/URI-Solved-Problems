#include<stdio.h>
#include<math.h>

int main(){
    //variaveis como notas
    int nota, cem, cinquenta, cinquentax, vinte, vintex, dez, dezx, cinco, cincox, dois, doisx;

    //variaveis como moedas
    int moedas, um, umx, cinquentac, vintec, dezc, cincoc, umc;
    double din;


    scanf("%lf", &din); // digita o dinheiro que é pra converter
    nota = (int)din; // transforma o double em int, acha as notas
    din = din - nota; // subtrai as notas do dinheiro em double
    moedas = (din * 100); // acha as moedas

    // operações nas notas
    cem = nota / 100; // divide a nota por cem para achar as notas de 100
    cinquenta = nota % 100; // 50 como o módulo de 100
    cinquentax = cinquenta / 50; // tem que pegar outra variável para ser a nota e dividir por 50
    vinte = cinquenta % 50;
    vintex = vinte / 20;
    dez = vinte % 20;
    dezx = dez / 10;
    cinco = dez % 10;
    cincox = cinco / 5;
    dois = cinco % 5;
    doisx = dois / 2;

    // operações nas moedas
    um = dois % 2; // faz o módulo
    umx = um / 1; // pega o módulo e divide por 1
    cinquentac = moedas / 50; // 50c sendo as moedas divido por 50 inteiro
    vintec = (moedas % 50) / 25;
    dezc = (((moedas % 50) % 25) / 10);
    cincoc = ((((moedas % 50) %25) % 10) / 5);
    umc = ((((moedas % 50) % 25) % 10) % 5) / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquentax);
    printf("%d nota(s) de R$ 20.00\n", vintex);
    printf("%d nota(s) de R$ 10.00\n", dezx);
    printf("%d nota(s) de R$ 5.00\n", cincox);
    printf("%d nota(s) de R$ 2.00\n", doisx);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", umx);
    printf("%d moeda(s) de R$ 0.50\n", cinquentac);
    printf("%d moeda(s) de R$ 0.25\n", vintec);
    printf("%d moeda(s) de R$ 0.10\n", dezc);
    printf("%d moeda(s) de R$ 0.05\n", cincoc);
    printf("%d moeda(s) de R$ 0.01\n", umc);

    return (0);
}

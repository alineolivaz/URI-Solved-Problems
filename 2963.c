#include <stdio.h>
int main ()
{
	int N, V, carlos, i = 0;;
	int nc = 1;

	scanf("%d", &N); // n�mero de candidatos
	scanf("%d", &V); // pega o carlos separado, j� que ele � o primeiro
	carlos = V;  // variavel especifica pro carlos

	while(i < (N - 1)){ // enquanto o contador for menor que o n�mero de candidatos menos 1, j� que o carlos eu peguei fora
		scanf("%d", &V); // pega a quantidade de votos dos outros candidatos 
		if(V > carlos){ // se a quant. de votos de um candidato for maior que o do carlos
            nc = 0; // atribuo 0 a variavel nc, mudando o valor iniciado l� em cima
		}
        i++; // incrementa 1 ao contador
	}

    if(nc == 1){ // se nc for um, significa que nenhum outro candidato recebeu mais votos que carlos, n�o alterando a vari�vel
        printf("S\n"); // carlos ganha o concurso
    }
    if(nc == 0){ // se nc for igual a 0, algum participante teve mais votos, logo ele perde o concurso
        printf("N\n");
    }

	return 0;
}

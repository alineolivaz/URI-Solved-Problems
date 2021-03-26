#include <stdio.h>
int main ()
{
	int vezes, ano;
	int resultado, i = 0; //declara as variaveis

	scanf("%d", &vezes); //pede pro usuário digitar um número
	do{ //faz a estrutura de repetição for
		scanf("%d", &ano); // entra com o ano

		resultado = ano - 2015; // anos transcorridos até 2015 DC

		if (resultado > 0) // se for antes de Cristo
			printf("%d A.C.\n", resultado + 1); //acrescenta 1 ao resultado
												//para não contar que um ano 0 exista
		else if (resultado < 0) // se for depois de Cristo
			printf("%d D.C.\n", -resultado); // coloca o sinal de menos para transformar o num em positivo
		else
			printf("1 A.C.\n"); // se o ano digitado for 2015;

        i++; // incrementa 1 ao contador
	}while(i < vezes); // enquanto o contador for menor que o num de vezes

	return 0;
}

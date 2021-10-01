#include<stdio.h>
#include<math.h>

int valores(int num[]){
    int posicao, i, aux;

    for(i = 0; i < 100; i++){
        scanf("%d", &num[i]);
    }

    aux = num[0];

    for(i = 0; i < 100; i++){
        if(num[i] > aux){
            aux = num[i];
            posicao = i;
        }
    }
    printf("%d\n", aux);
    printf("%d\n", posicao + 1);
}
int main(){
    int num[100], posicao;

    valores(num);

    return 0;
}

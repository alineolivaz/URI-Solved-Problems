#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int X, Y, soma = 0, i;

    scanf("%d %d", &X, &Y);

    if(X > Y){
        for(i=Y; i<=X; i++){
            if(i % 13 == 0) continue;
            soma = i + soma;
        }
    }
    if(X < Y){
        for(i=X; i<=Y; i++){
            if(i % 13 == 0)
            soma = i + soma;
        }
    }
    printf("%d\n",soma);
    return 0;
}

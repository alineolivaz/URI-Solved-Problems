#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int X, Y;
    int soma = 0, i;

    while(X != Y){
        scanf("%d %d", &X, &Y);

        if(X > Y){
			printf("Decrescente\n");
		}
		if(X < Y) {
			printf("Crescente\n");

		}
    }

    return 0;

}

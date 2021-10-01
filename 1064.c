#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int count = 0, pos = 0;
    float num, soma = 0;

    while(count < 6){
        scanf("%f", &num);
        if (num > 0){
            soma = soma + num;
            pos = pos + 1;
        }
        count = count + 1;
    }

    printf("%d valores positivos\n", pos);
    printf("%.1f\n", soma/pos);
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int fat = 1, N;

    scanf("%d", &N);

    while(N>1){
        fat = fat * N;
        N = N - 1;
    }

    printf("%d\n", fat);
    return 0;
}

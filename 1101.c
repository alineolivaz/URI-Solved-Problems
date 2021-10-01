#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    float M = 1, N = 1;
    int count = 0, soma = 0, i = 0;

    while(M > 0 && N > 0){
        scanf("%f %f", &M, &N);

        if(M > N && M > 0 && N > 0){
			for(i=N; i<=M; i++){
				soma+=i;
					printf("%d ", i);
			}
				printf("Sum=%d\n", soma);
		}
		else if(M < N && M > 0 && N > 0) {
			for(i=M; i<=N; i++){
				soma+=i;
					printf("%d ", i);
			}
				printf("Sum=%d\n", soma);

		}
		else if(M == N && M != 0 && N != 0) {
			for(i=M; i<=N; i++){
				soma = M + N;
					printf("%d ", i);
			}
				printf("Sum=%d\n", soma);

		}
		else{
            return 0;
		}
		soma = 0;
    }

    return 0;

}
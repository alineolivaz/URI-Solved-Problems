#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int matriz[100][100], n, i, j;

    do{
        scanf("%d",&n);

        if(n == 0){
            return 0;
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                matriz[i][j]= 1 + abs(i-j);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==0){
                    printf("%3hd",matriz[i][j]);
                }
                else
                    printf(" %3hd",matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }while(n!=0);

    return 0;
}

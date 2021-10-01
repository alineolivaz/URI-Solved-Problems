#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i,j, T;
    int N[1000];

    scanf("%d", &T);
    for(i=0;i<1000;){
        for(j=0;j<T;j++){
            N[i] = j;
            i++;
            if(i >= 1000)
                break;
        }
    }

    for(i=0;i<1000;i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
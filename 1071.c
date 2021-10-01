#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){

    int X, Y, aux=0;
    scanf("%d %d", &X, &Y);
    if(X == Y)
        printf("%d\n", aux);
    else if(X < Y)
    {
        for(X = X + 1; X < Y; X++)
        {
            if(X % 2 == 1 || X % 2 == -1)
                aux+=X;
        }
        printf("%d\n", aux);
    }
    else if(X > Y)
    {
        for(Y = Y + 1; Y < X; Y++)
        {
            if(Y % 2 == 1 || Y % 2 == -1)
                aux+=Y;
        }
        printf("%d\n", aux);
    }
    return 0;
}

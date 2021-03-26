#include <stdio.h>

int main() {

    int a, b, c, ra = 0, rb = 0, rc = 0;

    scanf("%d %d %d", &a, &b, &c);

    ra = (b * 2) + (c * 4);
    rb = (a + c) * 2;
    rc = (b * 2) + (a * 4);

    if(ra > rb && ra > rc){
        if(rb < rc){
            printf("%d\n", rb);
        }
        else{
            printf("%d\n", rc);
        }
    }
    else if(rb > ra && rb > rc){
        if(ra < rc){
            printf("%d\n", ra);
        }
        else{
            printf("%d\n", rc);
        }
    }
    else if(rc > ra && rc > rb){
        if(ra < rb){
            printf("%d\n", ra);
        }
        else{
            printf("%d\n", rb);
        }
    }
    else if(ra == rc){
        printf("%d\n", rb);
    }

    return 0;
}

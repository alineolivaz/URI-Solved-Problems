#include <stdio.h>
 
int main() {
 
    float A = 0.0;
    float B = 0.0;
    double MEDIA;

    scanf ("%f %f", &A, &B);

    MEDIA = ((A * 3.5) + (B * 7.5)) / 11;

    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
    
}
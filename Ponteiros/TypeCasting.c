#include <stdio.h>

int main(){
    int a, b, g;
    float c, d, e, f;

    a = 13;
    b = 5;
    e = 13.33;
    f = 15.21;
    c = a / b;
    d = (float)a / (float)b;
    g = (int)f / (int)e;
    printf("%f %f\n", e, f );
    printf("%d\n", g);
    printf("[integers]\t a = %d\t b = %d\n", a, b);
    printf("[floats]\t c = %f\t d = %f\n", c, d);

    return 0;
}
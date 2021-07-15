#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592653589

float sphericalcap_volume(float height, float radius)
{
    // float x = 0.33333;
    float a = 1, b = 3, c = a/b;
    //printf("%f\n", x);
    float y = height*height;
    float vol = c*((PI*y)*((3*radius) - height));
    //printf("%f\n", vol);
    return vol; 
}

int main(void)
{
    float h, r;
    printf("Enter with height and radius: ");
    scanf("%f %f", &h, &r);
    printf("The sphere volume is: %.2f\n", sphericalcap_volume(h, r));

    return 0;
}
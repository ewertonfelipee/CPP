#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

float vol_cylinder(float radius, float height){

    float volume;
    volume = PI * radius * radius * height;
    return volume;
}

int main(void){

    float radius, height, volume, volume1, volume2;
    printf("Enter radius and height values: ");
    scanf("%f %f", &radius, &height);
    volume = vol_cylinder(radius, height);
    volume1 = vol_cylinder(radius, height)/2.0;
    volume2 = vol_cylinder(radius, 2*height);
    printf("Cylinder volume is: %.2f %.2f %.2f\n", volume, volume1, volume2);
    return 0;
}
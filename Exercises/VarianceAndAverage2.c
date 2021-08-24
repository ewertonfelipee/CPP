#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// a -> average
// var -> variance
void take_values(int n, float* v)
{   // take and store values;
    printf("Enter the number of values: ");
    for(int i = 0; i < n; ++i){
        scanf("%f", &v[i]);
    }
}

float get_average(int n, float* v)
{
// calculate value of the average
    float a = 0.0f;
    for(int i = 0; i < n; ++i)
        a += v[i];
    
    return a/n;
}
float get_variance(int n, float* v, float a)
{
    float var = 0.0f;
    for(int i = 0; i < n; ++i){
        var += pow((v[i] - a), 2);
    }
    return var/n;

}

int main()
{
    int n; // values numbers
    // read number of values
    printf("Enter with the number of values: ");
    scanf("%d", &n);

    float *v = (float*)malloc(n*sizeof(float));

    if(v == NULL){
        printf("Insufficient memory");
        exit(1); // abort program
    }

    take_values(n, v);
    float a = get_average(n, v);
    float var = get_variance(n, v, a);

    printf("The Avarage is: %.2f\n", a);
    printf("The variance value is: %.2f\n", var);

    return 0;
}
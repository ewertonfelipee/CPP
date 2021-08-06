#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define N 100 // array dimension
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
    int n; // number of values
    float v[N], a, var; // values array

    // read number of values
    printf("Enter with the number of values: ");
    scanf("%d", &n);

    if(n > N){
        printf("Excessed numbers of values. Execed numbers max: %d\n", N);
        return true;
    }
    take_values(n, v);
    a = get_average(n, v);
    var = get_variance(n, v, a);

    printf("The Avarage is: %.2f\n", a);
    printf("The variance value is: %.2f\n", var);

    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define N 100 // array dimension
// a -> average
// var -> variance

int main()
{
    int n; // number of values
    float v[N]; // values array

    // read number of values
    printf("Enter with the number of values: ");
    scanf("%d", &n);
    if(n > N){
        printf("Excessed numbers of values. Execed numbers max: %d\n", N);
        return true;
    }

    // take and store values;
    printf("Enter the number of values: ");
    for(int i = 0; i < n; ++i){
        scanf("%f", &v[i]);
    }

    // calculate value of the average
    float a = 0.0f;
    for(int i = 0; i < n; ++i){
        a += v[i];
    }
    a /= n;
    printf("The Avarage is: %.2f\n", a);

    float var = 0.0f;
    for(int i = 0; i < n; ++i){
        var += pow((v[i] - a), 2);
    }
    var /= n;
    printf("The variance value is: %.2f\n", var);

    return 0;
}
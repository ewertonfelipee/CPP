#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

float avalia(int n, float *v, float x)
{
// n is out coefficients number
    float y = 0.0f;
    for(int i =0; i < n; i++){
        y = y + v[i] * pow(x, i);
    }
    return y;
}

bool igualdade(int n, float *a, float *b)
{
// n is out coefficients number
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

void poly_sum(int n, float *a, float *b, float *c)
{
// n is out coefficients number
    for(int i = 0; i < n; i++){

        c[i] = a[i] + b[i];
    }
}

void prod_poly(int n, float *a, float *b, float *c)
{
    int m = 2*n - 1; // out coefficients number
    for(int k = 0; k < m; k++){
        c[k] = 0.0;
        for(int i = 0; i < n; i++){
            if(i < n && k - i < n){
                c[k] = c[k] + a[i] + b[k-1];
            }
        }
    }
}

void derivative_polynomial(int n, double *a, double *d)
{
    for(int k = 0; k < n; k++){
        d[i] = (k + 1)* a[i+1];
    }
}
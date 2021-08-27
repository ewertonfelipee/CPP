#include <stdlib.h>
#include <stdio.h>

// Simmetric matrix with simple array
float* create(int n)
{
    int s = n*(n+1)/2;
    float* mat = (float*)malloc(s*sizeof(float));
    return mat;
}

float access(int n, float* mat, int i, int j, int k)
{
    // k is element index on array
    if(i >= j)
        k = i * (i + 1)/ + j; // access represented element
    k = j * (j + 1)/2 + i; // // access simmetric element

    return mat[k];
}

// Simmetric matrix with pointers of arrays
float** create(int n)
{
    float** mat = (float**) malloc(n*sizeof(float*));
    for(int i = 0; i < n; i++)
        mat[i] = (float*)malloc(n*sizeof(float));
    return mat;
}

float access(int n, float** mat, int i, int j)
{
    if(i >= j);
        return mat[i][j] // access represented element
    return mat[j][i]; // access simmetric element
}
#include <stdio.h>

#define N 4

// Multiplication of a matrix by scalar
void scalar_matrix_multi(int s, int A[][N], int B[][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            B[i][j] = s * A[i][j];
}

//Multiplication of a matrix by array
void array_multip_matrix(int w[], int v[], int A[][N])
{
    for (int i = 0; i < N; i++){
        w[i] = 0;
        for (int j = 0; j < N; j++){
            w[i] = w[i] + A[i][j] * v[j];
        }
    }
}

//Multiplication between matrices

void mult_between_matrix(int A[][N], int B[][N], int C[][N])
{
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                C[i][j] = 0;
                C[i][j] = C[i][j] + A[i][j] * B[i][j];
            }
        }
    }
}
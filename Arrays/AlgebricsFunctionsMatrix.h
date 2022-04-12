#include <stdio.h>
#include <stdbool.h>

#define N 4

bool simmetric(double A[][N])
{
    for(int i = 0; i < N; i++)
        for (int j = 0; j < i; j++)
            if(A[i][j] == A[j][i])
                return true;
    return false;
}

void create_transposed(double A[][N], double T[][N])
{
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            T[j][i] = A[i][j];
}

void transpose(double A[][N])
{
    for(int i = 0; i < N; i++)
        for(int j = 0; j < i; j++)
            double temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
}
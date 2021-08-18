#include <stdio.h>

#define N 3

void matrix_print(int mat[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            printf("M(%d, %d)=%d ", i, j, mat[i][j]);

        printf("\n");
}
void main(void)
{
    int mat[N][N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &mat[i][j]);
    
    matrix_print(mat);
}
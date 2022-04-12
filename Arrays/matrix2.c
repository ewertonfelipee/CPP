#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
    float vector[5];
    float matrix[6][5];
    float matrix3d[3][6][5];
    int i, j, k;
    for(int i = 0; i < 5; i++){
        vector[i] = sin(i);
        printf("%.4f ", vector[i]);
        //printf("%d ", i);
    }
    printf("\n\n");

    for(i = 0; i < 6; i++){
        for(j = 0; j < 5; j++){
            matrix[i][j] = sqrt(i+j);
            printf("%.4f ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            for(k = 0; k < 5; k++){
                matrix3d[i][j][k] = sqrt(i+j+k);
                printf("%.4f ", matrix3d[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}
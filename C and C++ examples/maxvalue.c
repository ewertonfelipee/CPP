// max value between elements of array
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 100 // array dimension

void take_values(int n, float *v)
{
    for(int i = 0; i < n; ++i)
        scanf("%f", &v[i]);
}
float max(int n, float *v)
{
    float m = v[0]; // stores max value
    for(int i = 0; i < n; ++i)
        if(v[i] > m) m = v[i]; // att sintaxe is the attribution sintaxe
    return m; // returns the max value
}

// Recursive definition

// void take_values(int n, float *v)
// {
//     if(n == 1)
//         return v[0];
//     else
//         float msub = take_values(n- 1, &v[0]); // subarray max
//         return v[0] > msub ? v[0] : msub; // max between of two
// }

int main(void){

    int n; // number of values
    float v[N]; // values array
    printf("Enter the number of values: ");
    scanf("%d", &n);

    if(n > N) 
        printf("Exceed values\n"); 

    take_values(n , v);
    float max_value = max(n, v);
    printf("The max element is: %.2f\n", max_value);
    
    return 0;
}
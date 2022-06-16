#include <stdio.h>

int main()
{
    int v[10], sum = 0;
    int *u = v; // u points to the first element of v
    u = &v[2];
    v[0] = 2;
    v[1] = 6;
    v[2] = 8;
    v[3] = 10;
    v[4] = 12;
    v[5] = 1;
    v[6] = 33;
    v[7] = 17;
    v[8] = 35;
    v[9] = 66;
    u[7] = 40;
    u[2] = 25 + u[7];
    for(int i = 0; i < 10; i++){

        sum += v[i];
    }
    printf("Was %d, now is: %d\n", v[2], u[2]);
    printf("%d\n", u[7]);
    printf("%d\n", sum);
    return 0;
}

// int arr[]{2, 3, 4}; C++ Declaration
// int arr[N]{2, 3, 4}; C++ Declaration


// |2|8|6|10|12|1|33|17|35|66| array values
//  1 2 3  4  5 6  7  8  9 10 array positions

/* In a array v, we have the equivalences follows:

    v + 0 points to the first element of the array
    v + 1 points to the second element of the array
    v + 2 points to the third element of the array
    .
    .
    .
    .
    .
    v + 9 points to the tenth element of the array
*/

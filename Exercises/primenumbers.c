#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// First Version of the prime numbers code
// int prime(int n)
// {
//     if (n < 2){
//         return false;
//     }
//     for (int i = 2; i <= n - 1; ++i) {
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// More efficient version of the prime numbers code

int prime(int n)
{
    if( n == 2 ) { return true; }
    else if(n < 2 || n % 2 == 0){ return false; }
    else{
        for (int i = 3; i <= sqrt(n); i+=2) {
            if(n % i == 0){ return false; }
        }
        return true;
    }
}

int main(void){

    int x, prime_number;
    printf("Enter the value: ");
    scanf("%d", &x);
    prime_number = prime(x);
    printf("%d\n", prime_number);
    return 0;
}
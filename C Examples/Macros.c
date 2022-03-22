#include <stdio.h>
#include <stdlib.h>
// sintaxe: #define identificator text-substitute 
#define PI 3.141592653589793
#define AREA_CIRCULAR(x) ((PI) * (x) * (x))
//#undef AREA_CIRCULAR 
#define MAX(x, y) (x > y ? x : y)

#define DEBUG
#define VAR(x) printf("The variable "#x" has the value: %d\n", x);

int main(int argc, char **argv)
{
    int count = 100;
    double area = AREA_CIRCULAR(5.0);
    printf("Area: %.3f\n", area);
    printf("Max: %d\n", MAX(4, 9));
#ifdef DEBUG
    printf("%s\n%d\n", __TIME__, __LINE__);
    VAR(count);
#endif
// The macros are resolved in the compilation time
    return 0;
}
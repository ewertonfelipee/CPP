#include <stdio.h>
#include <stdlib.h>

//  check and treat, if necessary, the error on memory allocation verifying 
//  the return of the malloc function

int *v = (int *)malloc(sizeof(int));
if (v == NULL)
{
    printf("Insufficent memory");
    exit(1); // abort program
}
free(v); // free memory allocated
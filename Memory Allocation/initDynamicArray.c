#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int *arr = malloc(10 * sizeof(int));
  for(int i= 0; i < sizeof(arr); i++){
    *(arr + i) = i;
  }

}
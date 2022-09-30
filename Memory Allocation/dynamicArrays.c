#include <stdio.h>
#include <stdlib.h>

int main(){
  typedef struct{
  int *elements;
  int size;
  int cap;
  }dny_array;

  dny_array arr;

  arr.size = 0;
  arr.elements = calloc(1,sizeof(*arr.elements));
  arr.cap = 1;

  arr.elements = realloc(arr.elements, (5 + arr.cap)
   * sizeof(*arr.elements));

  if(arr.elements != NULL){
    arr.cap += 5;
  }

  if(arr.size < arr.cap){
    arr.elements[arr.size] = 50;
    arr.size++;
  }
  else{
    printf("Need to expand the array");
  }

}
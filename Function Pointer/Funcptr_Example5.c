#include <stdio.h>

void say_hello(int num_times){
  for(int i = 0; i < num_times; i++){
    printf("Say hello\n");
  }
}

int main(int argc, char **argv){
  void(*func)(int);
  func = say_hello;
  func(5);

  return 0;
}
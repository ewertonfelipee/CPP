#include <stdio.h>

typedef struct{
  int number;
  int age;
  char name[50];
}student;

// struct pointer as a function parameter
void showStudent(student *s){
  printf("Number: %d", s->number);
  printf(" Age: %d", s->age);
  printf(" Name: %s\n", s->name);
}

int main(int argc, char **argv){
  student s = {555444, 25, "jay"};
  showStudent(&s);

  return 0;
}
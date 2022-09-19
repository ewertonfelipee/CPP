#include <stdio.h>

typedef struct {
  int h, w, l;
}box;

int main(int argc, char *argv[]){
  box boxes[3] = {{2,4,5},{5,8,10}, {5,3,9}};
  int volume;
  for(int i = 0; i < 3; i++){
    volume = boxes[i].h*boxes[i].w*boxes[i].l;
    printf("box %d volume %d\n", i, volume);
  }

  return 0;
}
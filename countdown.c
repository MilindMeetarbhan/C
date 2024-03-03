#include "cs136.h"

void countdown (int num, int (*func)(int)){
  for (int i = num; i > 0; --i){
    printf("%d ", func(i));
  }
  printf("\n");
}
  
int add (int num){
  return ++num; 
}

int twice (int num){
  return 2*num;
}

int sqr (int num){
  return num*num;
}

int main(void){
countdown (5, &add);
countdown (5, &twice);
countdown (5, &sqr); 
}

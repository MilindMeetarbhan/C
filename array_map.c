#include "cs136.h"

void array_map (int (*f)(int), int a[], int len){
  for (int i=0; i < len; ++i ){
    a[i] = f(a[i]);
  }
}

int sqr(int x) {return x * x; }

int main(void){
  int arr[4] = {2, 5, 14, 42};
  array_map(&sqr, arr, 4);
  assert(arr[0] == 4 && arr[1] == 25 && arr[2] == 196 && arr[3] == 1764);
}

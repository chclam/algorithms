#include <stdio.h>
#include <stdlib.h>

int fib(int i){
  if (i <= 1) {
    return i;
  }
  return fib(i - 1) + fib(i - 2);
}

int main(int argc, char *argv[]){
  int i = atoi(argv[1]);
  int ret = fib(i);
  printf("The %d-th fib number is: %d", i, ret);
  return 0;
}

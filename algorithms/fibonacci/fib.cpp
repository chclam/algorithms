#include <iostream>

int fib(int n){
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
}

int main(){
  int a[] = {30, 20, 21, 10, 15, 0, 5, 1};
  int len = sizeof(a)/sizeof(int);
  for (int i=0; i<len; i++) {
    std::cout << fib(a[i]) << " ";
  }
  std::cout << "\n";
}

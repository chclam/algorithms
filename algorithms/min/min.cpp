#include <iostream>

int min(int *a, int n){
  if (n == 1) {
    return *a;
  }
  int ret = a[0];
  for (int i=1; i<n; i++) {
    if (a[i] < ret) {
      ret = a[i];
    }
  }
  return ret;
}

int main(){
  int a[] = {5, 2, 7, 1, 3, 0, -1, 10};
  int n = sizeof(a)/sizeof(int);
  int y = min(a, n);
  std::cout << y << "\n";
}

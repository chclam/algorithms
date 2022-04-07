#include <iostream>

void bubbleSort(int *a, int n){
  for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++){
      if (a[j] < a[i]) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }
}

int main(){
  int a[] = {5, 1, 6, 7, 2, 10, 8, 3};
  int n = sizeof(a) / sizeof(int);
  for (int i=0; i<n; i++) {
    std::cout << a[i] << " ";
  }
  std::cout << "\n";
  bubbleSort(a, n);
  for (int i=0; i<n; i++) {
    std::cout << a[i] << " ";
  }
}

#include <stdio.h>

void bubbleSort(int*, int);
void printNumbers(int*, int);

void bubbleSort(int* arr, int n){
  for (int i=0; i < n; i++) {
    for (int j=i+1; j < n; j++) {
      if (arr[j] < arr[i]) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }
}

void printNumbers(int* arr, int n) {
  for (int i=0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[10] = {8, 5, 2, 3, 1, 9, 4, 6, 7, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  printNumbers(arr, n);
  bubbleSort(arr, n);
  printNumbers(arr, n);
}


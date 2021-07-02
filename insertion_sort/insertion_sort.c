#include <stdio.h>
// Function declarations
void insertionSort(int* arr, int len);
void printNumbers(int* arr, int len);

void insertionSort(int* arr, int len){
  for (int i=1; i < len; i++) {
  int j = i;
    while (j > 0 && arr[j] < arr[j-1]) {
      int tmp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = tmp;
      j--;
    }
  }
}

void printNumbers(int* arr, int len) {
  for (int i=0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[10] = {6, 2, 3, 7, 1, 8, 5, 10, 2, 9};
  int len = sizeof(arr) / sizeof(arr[0]);
  // Only pointers to the arrays are passed to functions.
  // size / length of the array must be passed in order to
  // iterate through the array in the function.
  printNumbers(arr, len);
  insertionSort(arr, len);
  printNumbers(arr, len);
  return 0;
}


#include <stdio.h>
#include <math.h>

int binarySearch(int *arr, int len, int q) {
  int l = 0;
  int r = len - 1;
  while (r - l > 0) {
    int m = floor((l + r) / 2);
    if (q < arr[m]) {
      r = m - 1;
    }
    else if (q > arr[m]) {
      l = m + 1;
    }
    else {
      return 1;
    }
  }
  return 0;
}

void printNumbers(int *arr, int len) {
  for (int i=0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int len = sizeof(arr) / sizeof(int);
  int q = 1;
  printNumbers(arr, len);
  int inArr = binarySearch(arr, len, q);
  printf("%d is in arr: %d \n", q, inArr);
}


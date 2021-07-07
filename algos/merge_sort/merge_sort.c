#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printNumbers(int *arr, int len) {
  for (int i=0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void mergeSort(int *arr, int len) {
  if (len == 1) {
    return;
  }
  else if (len == 2) {
    if (arr[0] > arr[1]) {
      int t = arr[0];
      arr[0] = arr[1];
      arr[1] = t;
      return;
    }
  }

  int m = len / 2;
  int *l = arr;
  int *r = arr + m;

  mergeSort(l, m);
  mergeSort(r, len - m);
  
  int *t = malloc(sizeof(int) * len);
  int *rt = t;
  while(l < arr + m || r < arr + len) {
    if (l < arr + m && r < arr + len) {
      if (*l <= *r) {
        *t = *l;
        l++;
      }
      else {
        *t = *r;
        r++;
      }
    }
    else if (l < arr + m) {
      *t = *l;
      l++;
    }
    else if (r < arr + len) {
      *t = *r;
      r++;
    }
    t++;
  }
  memcpy(arr, rt, sizeof(int) * len);
  free(rt);
}

int main() {
  int arr[10] = {6, 2, 3, 7, 1, 8, 5, 10, 2, 9};
  int len = sizeof(arr) / sizeof(int);
  printNumbers(arr, len);
  mergeSort(arr, len);
  printNumbers(arr, len);
  return 0;
}


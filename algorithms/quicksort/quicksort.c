#include <stdio.h>

void quickSort(int *a, int lo, int hi) {
  if (lo >= hi) 
    return;
  int p = lo;
  for (int i=lo; i < hi; i++) {
    if (a[i] <= a[p]) {
      int t = a[i];
      a[i] = a[p];
      a[p] = t;
      p = i;
    }
  }
  quickSort(a, lo, p);
  quickSort(a, p+1, hi);
}

int main() {
  int a[] = {8, 3, 2, 1, 4, 5, 8, 7, 6, 7};
  int len = sizeof(a) / sizeof(int);
  quickSort(a, 0, len);
  for (int i=0; i < len; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}

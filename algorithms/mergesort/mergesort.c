#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mergeSort(int *a, int len) {
  if (len == 1) {
    return;
  }
  if (len == 2) {
    if (a[0] > a[1]) {
      int t = a[0];
      a[0] = a[1];
      a[1] = t;
    }
    return;
  }

  int m = len/2;
  int *l = a;
  int *r = a + m;
  
  mergeSort(l, m);
  mergeSort(r, len - m);

  int *t = malloc(sizeof(int)*len);
  int *rt = t;
  
  while (1) {
    if (l < (a+m) && r < (a+len)){
      if (*l < *r) {
        *t = *l;
        l++;
      }
      else {
        *t = *r;
        r++;
      }
    }
    else if (l < (a+m)) {
      *t = *l;
      l++;
    }
    else if (r < (a+len)) {
      *t = *r;
      r++;
    }
    else {
      break;
    }
    t++;
  }
  memcpy(a, rt, sizeof(int)*len);
  free(rt);
}

int main() {
  int a[] = {5, 2, 1, 8, 6, 10, 9, 3, 2, 7, 4};
  int len = sizeof(a)/sizeof(int);
  mergeSort(a, len);
  for (int i=0; i<len; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

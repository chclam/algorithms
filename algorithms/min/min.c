#include <stdio.h>

int min(int *a, int len) {
  if (len == 1)
    return a[0];
  int ret = a[0];
  for (int i=1; i < len; i++) {
    if (ret > a[i]) {
      ret = a[i];
    }
  }
  return ret;
}

int main() {
  int a[] = {5, 2, 3, 1, 9, 10, 7, 7};
  int len = sizeof(a) / sizeof(int);
  int m = min(a, len);
  printf("%d", m);
}

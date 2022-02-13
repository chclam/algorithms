#include <stdio.h>

int naive(char *t, char *p, int n, int m) {
  int i = 0;
  int j = 0;
  while (i < n-1 && j < m-1) {
    if (t[i] == p[j]) {
      i++;
      j++;
    }
    else {
      i = i - j + 1;
      j = 0;
    }
  }
  if (j == m-1) {
    return i - m + 1; 
  }
  return -1;
}

int main() {
  char t[] = "abcabaabcabac";
  char p[] = "abaa";
  char n = sizeof(t) / sizeof(char);
  char m = sizeof(p) / sizeof(char);
  int s = naive(t, p, n, m);
  printf("%d\n", s);
}

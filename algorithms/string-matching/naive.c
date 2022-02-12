#include <stdio.h>

int naive(char *t, char *p, int n, int m) {
  int i = 0;
  int j = 0;
  while (i < n && j < m-1) {
    if (t[i] == p[j]) {
      i++;
      j++;
    }
    else {
      j = 0;
      i = i - j + 1;
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

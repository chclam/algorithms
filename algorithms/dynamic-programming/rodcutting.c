#include <stdio.h>
#include <stdlib.h>

int rodCuttingTb(int n, int *p, int *r){
  if (r[n] >= 0)
    return r[n];
  if (n == 0)
    return 0;
  int ret = p[n];
  for (int i=1; i<n; i++) {
    int t = rodCuttingTb(i, p, r) + rodCuttingTb(n-i, p, r);
    if (ret < t) {
      ret = t;
    }
  }
  r[n] = ret;
  return ret;
}

int rodCuttingBt(int n, int *p, int p_n){
  int r[p_n];
  for (int i=1; i<p_n; i++) {
    r[i] = -1;
  }
  r[0] = 0;
  for (int j=1; j<n+1; j++) {
    int q = p[j];
    for (int i=1; i<j; i++) {
      int t = r[i] + r[j-i]; 
      if (q < t) {
        q = t;
      }
    }
    r[j] = q;
  }
  return r[n];
}

int main(){
  int p[] = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
  int p_n = sizeof(p)/sizeof(int);
  int r[p_n];
  for (int i=0; i<p_n; i++) {
    r[i] = -1;
  }
  printf("%d\n", rodCuttingTb(10, p, r));
  printf("%d\n", rodCuttingBt(10, p, p_n));
}

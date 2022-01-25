int sum(int *a, int len) {
  if (len == 0) 
    return 0;
  else if (len == 1) 
    return a[0];
  int ret = a[0];
  for (int i=1; i < len; i++) {
    ret = ret + a[i];
  }
  return ret;
}

int main() {
  int a[] = {5, 2, 6, 1, 7, 1, 10, 9, 3};
  int len = sizeof(a) / sizeof(int);
  int y = sum(a, len);
}

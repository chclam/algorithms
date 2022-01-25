def sum(a):
  if len(a) == 0:
    return 0
  elif len(a) == 1:
    return a[0]
  ret = 0
  for i in range(len(a)):
    ret += a[i]
  return ret

if __name__ == "__main__":
  a = [5, 2, 6, 1, 7, 1, 10, 9, 3]
  y = sum(a)
  print(y)

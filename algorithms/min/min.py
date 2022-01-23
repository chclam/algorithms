
def minim(a):
  if len(a) < 2:
    return a
  ret = a[0]
  for i in range(1, len(a)):
    if ret > a[i]:
      ret = a[i]
  return ret

if __name__ == "__main__":
  a = [5, 2, 1, 6, 7, 10]
  print(minim(a))

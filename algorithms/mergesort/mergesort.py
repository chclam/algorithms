def mergesort(a):
  if len(a) == 1:
    return a
  if len(a) == 2:
    if a[0] < a[1]:
      return a
    else:
      return [a[1], a[0]]

  m = len(a) // 2
  l = mergesort(a[:m])
  r = mergesort(a[m:])

  ret = []
  while len(l) > 0 or len(r) > 0:
    if len(l) == 0:
      ret.append(r.pop(0))
      continue
    elif len(r) == 0:
      ret.append(l.pop(0))
    else:
      if l[0] <= r[0]:
        ret.append(l.pop(0))
      else:
        ret.append(r.pop(0))
  return ret

if __name__ == "__main__":
  a = [5, 2, 1, 6, 7, 8, 7, 10, 4, 0, 3]
  a = mergesort(a)
  print(a)


def mergesort(li):
  if len(li) == 1:
    return li

  m = len(li) // 2
  l = li[:m]
  r = li[m:]
  l = mergesort(l)
  r = mergesort(r)

  ret = []
  while len(l) > 0 or len(r) > 0:
    if len(l) > 0 and len(r) > 0:
      if l[0] <= r[0]:
        ret.append(l.pop(0))
      else:
        ret.append(r.pop(0))
    elif len(r) > 0:
      ret.extend(r)
      r = []
    elif len(l) > 0:
      ret.extend(l)
      l = []
  return ret

li = [8, 5, 2, 3, 1, 9, 4, 6, 7, 0, 2]  
print(li)
print(mergesort(li))

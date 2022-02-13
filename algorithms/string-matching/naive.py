def naive(t, p):
  i = 0
  j = 0
  while i < len(t) and j < len(p):
    if t[i] == p[j]:
      j += 1
    else:
      i = i - j
      j = 0
    i += 1
  if j == len(p):
    return i - len(p)
  return -1

if __name__ == "__main__":
  t = "abcabaabcabac"
  p = "abaa"
  s = naive(t, p);
  print(s)


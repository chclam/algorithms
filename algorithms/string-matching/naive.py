def naive(t, p):
  i = 0
  j = 0
  while i < len(t) and j < len(p):
    if t[i] == p[j]:
      i += 1
      j += 1
    else:
      i = i - j + 1
      j = 0
  if j == len(p):
    return i - len(p)
  return -1

if __name__ == "__main__":
  t = "abcabaabcabac"
  p = "abaa"
  s = naive(t, p);
  print(s)


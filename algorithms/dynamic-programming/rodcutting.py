def rod_cutting_tb(n, p, r):
  if r[n] >= 0:
    return r[n]
  if n == 0:
    return 0
  ret = p[n]
  for i in range(1, n):
    ret = max(ret, rod_cutting_tb(i, p, r) + rod_cutting_tb(n-i, p, r))
  r[n] = ret
  return ret

def rod_cutting_bt(n, p):
  r = [-1 for i in range(len(p)+1)]
  r[0] = 0
  for j in range(1, n+1):
    ret = p[j]
    for i in range(1, j):
      ret = max(ret, r[i] + r[j-i])
    r[j] = ret
  return r[n]

if __name__ == "__main__":
  p = {1: 1, 2: 5, 3: 8, 4: 9, 5: 10, 6: 17, 7: 17, 8: 20, 9: 24, 10: 30}
  r = [-1 for i in range(len(p)+1)]
  print(rod_cutting_tb(10, p, r))
  print(rod_cutting_bt(10, p))


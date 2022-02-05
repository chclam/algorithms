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
    q = p[j]
    for i in range(1, j):
      q = max(q, r[i] + r[j-i])
    r[j] = q 
  return r[n]

if __name__ == "__main__":
  p = [0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30]
  r = [-1 for i in range(len(p)+1)]
  print(rod_cutting_tb(10, p, r))
  print(rod_cutting_bt(10, p))


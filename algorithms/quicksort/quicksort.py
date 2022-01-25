def partition(a, lo, hi):
  p = lo
  for i in range(lo+1, hi):
    if a[i] < a[p]:
      t = a[i]
      a[i] = a[p]
      a[p] = t
      p = i
  return p
    
def quicksort(a, lo, hi):
  if lo >= hi:
    return
  p = partition(a, lo, hi)
  quicksort(a, lo, p)
  quicksort(a, p+1, hi)

if __name__ == "__main__":
  a = [3, 2, 1, 4, 5, 8, 7, 6]
  quicksort(a, 0, len(a))
  print(a)


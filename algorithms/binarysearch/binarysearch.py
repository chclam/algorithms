
def binary_search(li, q):
  l = 0
  r = len(li) - 1
  while r - l > 0:
    m = (r + l) // 2
    if q < li[m]:
      r = m - 1
    elif q > li[m]:
      l = m + 1
    else:
      return True
  return False

if __name__ == "__main__":
  li = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
  q = 10
  in_li = binary_search(li, q)
  print(li)
  print(f"{q} is in list: {in_li}")


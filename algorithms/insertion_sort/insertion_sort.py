def insertion_sort(li):
  # in place insertion sort
  for i in range(1, len(li)):
    j = i
    while j > 0 and li[j] < li[j-1]:
      tmp = li[j]
      li[j] = li[j-1]
      li[j-1] = tmp
      j -= 1

li = [6, 2, 3, 7, 1, 8, 5, 10, 2, 9]

print(li)
insertion_sort(li)
print(li)


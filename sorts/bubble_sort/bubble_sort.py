def bubble_sort(li):
  for i in range(len(li)):
    for j in range(i+1, len(li)):
      if li[j] < li[i]:
        tmp = li[i]
        li[i] = li[j]
        li[j] = tmp

li = [8, 5, 2, 3, 1, 9, 4, 6, 7, 0]
print(li)
bubble_sort(li)
print(li)


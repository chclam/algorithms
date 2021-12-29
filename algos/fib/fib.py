import sys

def fib_it(a):
  # iterative version
  ret = 0
  stk = [a]
  while len(stk) > 0:
    a = stk.pop()  
    if a == 0:
      continue
    elif a == 1:
      ret += 1
    else:
      stk.append(a-1)
      stk.append(a-2)
  return ret
    
def fib_rec(a):
  # recursive version
  if a == 0:
    return 0
  elif a == 1:
    return 1
  return fib(a-1) + fib(a-2)

n = int(sys.argv[1])
print(fib_it(n))


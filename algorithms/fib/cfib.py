from ctypes import *
import sys 

clib = CDLL("./fib.so")
i = int(sys.argv[1])
ret = clib.fib(i)
print(ret)

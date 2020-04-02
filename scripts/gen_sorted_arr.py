from random import sample,choice
from sys import argv
n=int(argv[1])
arr=sorted(sample(range(n*20),n))
key=choice(arr)
print(n)
print(*arr)
print(key)

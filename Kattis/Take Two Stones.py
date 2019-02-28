import sys

for i in sys.stdin:
    cupmoves = int(i)

if cupmoves % 2 == 1:
    print("Alice")
else:
print("Bob")
import sys

cupmoves = ""
for i in sys.stdin:
    cupmoves += i

position = 'A'

for x in range(0,len(cupmoves)):
    if (position == 'A' and cupmoves[x] == 'A') or (position == 'C' and cupmoves[x] == 'B'):
        position = 'B'
    elif (position == 'A' and cupmoves[x] == 'C') or (position == 'B' and cupmoves[x] == 'B'):
        position = 'C'
    elif (position == 'B' and cupmoves[x] == 'A') or (position == 'C' and cupmoves[x] == 'C'):
        position = 'A'

if position == 'A':
    print(1)
elif position == 'B':
    print(2)
else:
print(3)
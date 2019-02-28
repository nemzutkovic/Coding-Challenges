import sys

godlist = []

for i in sys.stdin:
    godlist.append(i.strip())

x = int(godlist[0])
y = int(godlist[1])

if x > 0 and y > 0:
    print(1)
elif x < 0 and y > 0:
    print(2)
elif x < 0 and y < 0:
    print(3)
else:
	print(4)
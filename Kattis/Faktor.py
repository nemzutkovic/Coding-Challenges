import sys

godlist = []

for i in sys.stdin:
    godlist.append(i)

godlist = godlist[0].split()
output = (int(godlist[0])*(int(godlist[1]) - 1)) + 1

print(output)
import sys

godlist = []

for i in sys.stdin:
    godlist.append(i)

godlist = godlist[0].split()
output = ((int(godlist[1])*2) - int(godlist[0]))

print(output)
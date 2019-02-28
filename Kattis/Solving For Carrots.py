import sys

godlist = []

for i in sys.stdin:
    godlist.append(i.strip())

firstline = godlist[0].split()

print(firstline[1])
import sys

godlist = []

for i in sys.stdin:
    godlist.append(int(i))

mblimit = godlist[0]
months = godlist[1]
output = 0

for j in range(2,len(godlist)):
    output += (mblimit - godlist[j])

output += mblimit
print(output)
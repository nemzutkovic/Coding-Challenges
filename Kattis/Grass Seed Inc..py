import sys

godlist = []

for i in sys.stdin:
    godlist.append(str(i.strip()))

templist = []

for j in range(2,len(godlist)):
    templist.append(godlist[j].split())

output = 0

for k in range(0,len(templist)):
    output += (float(templist[k][0])*float(templist[k][1]))

output = output*float(godlist[0])
print(output)
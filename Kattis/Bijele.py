import sys

godlist = []

for i in sys.stdin:
    godlist.append(i)

godlist = godlist[0].split()

output = ""

output += str(1 - int(godlist[0])) + " "
output += str(1 - int(godlist[1])) + " "
output += str(2 - int(godlist[2])) + " "
output += str(2 - int(godlist[3])) + " "
output += str(2 - int(godlist[4])) + " "
output += str(8 - int(godlist[5]))

print(output)
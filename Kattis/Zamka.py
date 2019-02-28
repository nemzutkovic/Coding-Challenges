import sys

godlist = []
for i in sys.stdin:
    godlist.append(i.strip())

minimum = int(godlist[0])
maximum = int(godlist[1])
target  = int(godlist[2])

minout  = maximum
maxout  = minimum

def compute_sum(integer):
    temp = str(integer)
    output = 0
    for i in temp:
        output += int(i)
    return output

for x in range(minimum, maximum+1):
    if compute_sum(x) == target and x < minout:
        minout = x
    if compute_sum(x) == target and x > maxout:
        maxout = x

print(minout)
print(maxout)
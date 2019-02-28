import sys

incoming = ""
outgoing = ""

for i in sys.stdin:
    incoming += i

outgoing += incoming[0]

for x in range(0, len(incoming)):
    if incoming[x] == '-' and x < len(incoming)-1:
        outgoing += incoming[x+1]

print(outgoing)
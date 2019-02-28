import sys
import math

def main():
    godlist = []
    
    for i in sys.stdin:
        godlist.append(i.split())
    
    length = godlist[0]
    total = 0

    for x in range(1,len(godlist)):
        temp = godlist[x]
        total += (float(temp[0]))*(float(temp[1]))

    print(total)

main()
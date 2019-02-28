import sys
import math

def main():
    godlist = []
    
    for i in sys.stdin:
        godlist.append(i.split())
    limit = math.sqrt((int(godlist[0][1])**2) + ((int(godlist[0][2])**2)))
    
    for x in range(1, len(godlist)):
        if int(godlist[x][0]) <= limit:
            print("DA")
        else:
            print("NE")

main()
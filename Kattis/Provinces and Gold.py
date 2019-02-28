import sys
import math

def main():
    
    for i in sys.stdin:
        godlist = i.strip().split()

    gold = int(godlist[0])
    silver = int(godlist[1])
    copper = int(godlist[2])
    buyingpower = gold*3 + silver*2 + copper*1

    output = ""

    if buyingpower >= 2 and buyingpower < 5:
        output += "Estate"
    elif buyingpower >= 5 and buyingpower < 8:
        output += "Duchy"
    elif buyingpower >= 8:
        output += "Province"
    else:
        output = ""

    if output != "":
        output += " or "
    else:
        output = ""

    if buyingpower >= 6:
        output += "Gold"
    elif buyingpower < 6 and buyingpower >= 3:
        output += "Silver"
    else:
        output += "Copper"
    
    print(output)

main()
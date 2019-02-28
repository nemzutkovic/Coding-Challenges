import sys

def convert_to_minutes(ogtime):
    return int(ogtime[0])*60 + int(ogtime[1])

def convert_to_hours(mintime):
    temptime = mintime
    hours = 0
    minutes = 0
    while temptime >= 60:
        temptime = temptime - 60
        hours += 1
    minutes = temptime
    newtime = str(hours) + " " + str(minutes)
    return newtime

def main():
    godlist = []

    for i in sys.stdin:
        godlist = i.split()

    if(convert_to_minutes(godlist)) >= 45:
        temptime = convert_to_minutes(godlist) - 45
    else:
        temptime = 1440 + (convert_to_minutes(godlist)) - 45
    print(convert_to_hours(temptime))

main()
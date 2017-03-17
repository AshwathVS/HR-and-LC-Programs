test = int(input())
for h in range(0,test):
    x = input()
    y = -1
    z = 1
    temp = z+y
    while(temp < int(x)):
        y = z
        z = temp
        temp = y+z
    if((temp>int(x))):
        print("IsnotFibo")
    else:
        print("IsFibo")

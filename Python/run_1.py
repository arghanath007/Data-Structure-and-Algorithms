def check_sector(n,r,b):
    if r*2 > n or b*2 > n:
        print("idiots")
    else:    
        print("How very smart")

t = int(input())
while t > 0:
    t-=1
    inp = input()
    arr = [ int(x) for x in inp.split(" ")]
    n = arr[0]
    r = arr[1]
    b = arr[2]
    check_sector(n,r,b) 
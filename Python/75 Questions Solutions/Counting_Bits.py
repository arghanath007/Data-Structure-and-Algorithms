def countBits(n: int) -> list[int]:
    bits=[0]* (n+1)
    offset=1 
    
    for i in range(1, n+1):
        if offset * 2 == i:
            offset=i
            
        bits[i]=1 + bits[i - offset]
        
    return bits


n=int(input())
print(countBits(n))
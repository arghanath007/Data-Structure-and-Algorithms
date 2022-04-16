def hammingWeight(n: int) -> int:
    res=0
    
    while n:
        res+= n%2
        n=n>>1
        
    return res
    # res=0
    
    # while n:
    #     n&=(n-1)
    #     res+=1
    # return res




# n=int(input())
n=101110
print(hammingWeight(n))

# Time Complexity O(1)
# Space Complexity O(1)
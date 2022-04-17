def reverseBits(n: int) -> int:
    ans=0
    for i in range(32): # Since it is a 32 bit number.
        ans= (ans<<1)  + (n&1)
        n>>=1
        
    return ans


n=int(input())
print(reverseBits(n))


# Time Complexity -> O(n)
# Space Complexity -> O(1)
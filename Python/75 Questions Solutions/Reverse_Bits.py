def reverseBits(n: int) -> int:
    ans=0
    for i in range(32):
        ans= (ans<<1)  + (n&1)
        n>>=1
        
    return ans


n=int(input())
print(reverseBits(n))
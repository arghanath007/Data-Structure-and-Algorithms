class Calc:
    def getSum(self,a: int, b: int) -> int:
    
        # while b!=0:
        #     carry= (a&b) # For the Carry overs.
        #     a^=b # XORing the two numbers. Same numbers means '0' as the output and different numbers means '1' as the output.
        #     b=carry <<1
            
        # return a
        
        # return b==0? a:getSum(a^b, (a&b)<<1)
        
        # One liner
        return a if b==0 else self.getSum(a^b, (a&b)<<1) 
        
        # list=[a,b]
        #     return sum(list)


a=int(input())
b=int(input())
# a=1
# b=2

cal=Calc() # Object creation

print(cal.getSum(a,b))



# Time Complexity is O(n)
# Space Complexity is O(1)

# Video -> https://www.youtube.com/watch?v=gVUrDV4tZfY, 
# Resource ->https://leetcode.com/problems/sum-of-two-integers/discuss/84278/A-summary%3A-how-to-use-bit-manipulation-to-solve-problems-easily-and-efficiently
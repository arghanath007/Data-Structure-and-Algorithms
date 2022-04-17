# Bottom Up Dynamic Programming

def climbStairs(n: int) -> int:
    one,two=1,1
    count=n
    for i in range(n-1):
        # count=one + two
        # two=one
        # one=count
    # return count
    
        prevOne=one
        one+=two
        two=prevOne
        
    return one



n=int(input())
print(climbStairs(n))
        
        
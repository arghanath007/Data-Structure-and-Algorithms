# import math

def uniquePaths(m: int, n: int) -> int:

    dp, dpPrev = [0] * n, [0] * n
    for r in range(m):
        for c in range(n):
            if r == 0 and c == 0:
                dp[c] = 1 
            elif r == 0:
                dp[c] = dp[c-1]
            elif c == 0:
                dp[c] = dpPrev[c]
            else:
                dp[c] = dpPrev[c] + dp[c-1]
        dpPrev = dp
    return dpPrev[n-1]
    
    
        
# Math Solution


print(uniquePaths(3,2))

# print(math.factorial(5))
# print([1]*5)
# return math.factorial(m+n-2)

# Time Complexity: O(n*m) n = rows, m = cols
# Space Complexity: O(m) m = rows
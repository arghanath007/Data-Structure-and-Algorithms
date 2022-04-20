def numDecodings(s: str) -> int:
    dp={len(s): 1} # Base case with all values get to '1' by default. If it is an empty string then we will return '1'.
    
    for i in range(len(s)-1,-1,-1):
        if s[i]=='0': # This is a base case as well, if the starting number in the string is '0' then we will return '0'.
            dp[i]=0
        else:
            dp[i]=dp[i+1] # This is if we start with a single digit(1-9).
            
        if (i+1 < len(s)) and (s[i]=='1' or s[i] == '2' and (s[i+1] in "0123456")): # This is if we start with a double digit(10-26).
            dp[i]+=dp[i+2]
            
    return dp[0]     


s="226"
print(numDecodings(s))

# Time Complexity: O(n)
# Space Complexity: O(n)
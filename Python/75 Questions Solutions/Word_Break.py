def wordBreak(s: str, wordDict: list[str]) -> bool:
    dp=[False] * (len(s)+1) # Creating a 1D array with 'False' as the default value
    dp[len(s)]=True  # Base Case   
    
    for i in range(len(s)-1,-1,-1):
        for w in wordDict:
            if (i + len(w)) <= len(s) and s[i: i + len(w)] == w:  # '(i + len(w)) <= len(s)' checking if we can fit the word 'w' in the string 's'.
                dp[i] = dp[i + len(w)]  # dp[4 + 4]= dp[8]= True, Satisfying the base case.
                
            if dp[i]: # Break, if we find at-least one word to Word Break 's', then we go to the next iteration/index.
                break
            
            
    return dp[0]


# i=7 6 5 4

s="leetcode"
wordDict=["leet","code"]

print(wordBreak(s,wordDict))


# Bottom Up Dynamic Programming
# Time Complexity: O(n^2)
# Space Complexity: O(n)
    
    
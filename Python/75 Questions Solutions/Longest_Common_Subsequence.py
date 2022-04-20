def longestCommonSubsequence(text1: str, text2: str) -> int:
    dp=[[0 for i in range(len(text2) +1)] for j in range(len(text1) +1)] # To create a 2D array of size len(text1)+1 X len(text2)+1
    
    for i in range(len(text1)-1,-1,-1):
        for j in range(len(text2)-1,-1,-1):
            if text1[i] == text2[j]:
                dp[i][j]= 1 + dp[i+1][j+1] # Going Diagonally
                
            else:
                dp[i][j]= max(dp[i+1][j],dp[i][j+1]) # dp[i+1][j] is the immediate bottom row value and dp[i][j+1] is the immediate right column value.
                
    return dp[0][0]



text1="abcde"
text2="ace"

print(longestCommonSubsequence(text1,text2))
    
    
    

     
# Bottom Up Dynamic Programming
# Time Complexity is O(n*m) 'n' is the length of text1 and 'm' is the length of text2
# Space Complexity is O(n*m)
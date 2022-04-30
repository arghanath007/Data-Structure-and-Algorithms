def countSubstrings(s: str) -> int:
    res=0
    
    for i in range(len(s)):
        # l=r=i
        # res+= countPalindrome(s,l,r)  # For the Odd Palindromes
        # l,r=i, i+1
        # res+= countPalindrome(s,l,r) # For the Even Palindromes
    
    
        # More Condensed Code
        res+= countPalindrome(s,i,i)  # For the Odd Palindromes
        res+= countPalindrome(s,i,i+1) # For the Even Palindromes
        
    return res


def countPalindrome(s,l,r):
    res=0
    while l>=0 and r < len(s) and s[l] == s[r]:
        res+=1
        l-=1
        r+=1
    return res


s='babad'
print(countSubstrings(s))

# Time Complexity: O(n^2)
# Space Complexity : O(n)
def isPalindrome(s: str) -> bool:
    newStr=""
    
    for ch in s:
        if ch.isalnum(): # Checking if the Character is AlphaNumeric.
            newStr+=ch.upper() # Converting all of the Character to UpperCase as the question has asked to ignore cases.
            
    return newStr == newStr[::-1] # 'newStr[::-1]' is the way to reverse a string.



def isPalindromeAlpha(s: str) -> bool:
    
    l,r=0, len(s)-1
    
    while l < r:
        while l < r and not alphaNum(s[l]): # CHecking if 'l' is not out of bounds
            l+=1
            
        while r > l  and not alphaNum(s[r]): # CHecking if 'l' is not out of bounds
            r-=1
            
        if s[l].lower() != s[r].lower(): # If True then it is not Alphanumeric.
            return False
        
        l+=1
        r-=1
    return True


def alphaNum(c):
    return (ord('A') <= ord(c) <= ord('Z') or ord('a') <= ord(c) <= ord('z') or ord('0') <= ord(c) <= ord('9'))  # ord() is used to convert the character to its ASCII value.



        
        
# str="A man, a plan, a canal: Panama"
# str="Argha ahgra"
str="JOhn john Wick"
print(isPalindrome(str))


# With the build-in AlphaNumeric function
# Time Complexity: O(n)
# Space Complexity: O(n) , since we are storing a string and also reversing(newStr[::-1]) the string.



print(isPalindromeAlpha(str))
# Without the build-in AlphaNumeric function
# Time Complexity: O(n)
# Space Complexity: O(1) , since we are not storing any extra data. 
def lengthOfLongestSubstring(s: str) -> int:
    usedChar= {} # HashMap
    
    l=0 # Left Pointer
    res=0 # Result
    
    for r in range(len(s)): # Right pointer
        if s[r] in usedChar and l <= usedChar[s[r]]:
            l= usedChar[s[r]] + 1  # 'l' will be the index of the next possible repeating character. If we have a repeating character, we will move 'l' to the right of the repeating character.
            
        else:
            res= max(res, r-l+1)
            
        usedChar[s[r]]= r  # Creating an object with the Character as the key and it's index as the value.
        
    return res


# s= "abcabcbb"
s='ArghA'
print(lengthOfLongestSubstring(s))

# usedChar= {A:0}   {A:0, r:1}  {A:0, r:1,g:2}  {A:0, r:1,g:2,h:3}  {A:4, r:1,g:2,h:3}
# l=        0       0           0               0                   1
# res=      1       2           3               4                   4
# r=        0       1           2               3                   4



# Time Complexity: O(n)
# Space Complexity: O(n)


# def length_of_LongestSubstring_set(s: str) -> int:
#     usedChar= set() # Set

#     l=0 # Left Pointer
#     res=0 # Result

#     for r in range(len(s)): # Right pointer
#         while s[r] in usedChar: # if 's[r]' is in 'userChar' then we will remove 's[l]' from 'userChar' and increment 'l'
#             usedChar.remove(s[l])
#             l+=1
            
#         usedChar.add(s[r]) # Add 's[r]' to 'userChar' 
#         res= max(res, r-l+1) # 'r-l+1' window length

#     return res
def characterReplacement(s: str, k: int) -> int:
    count={} # HashMap
    res=0 # Length of the longest SubString with 'K' replacements
    
    l=0
    for r in range(len(s)): # Every single position in the entire string
        count[s[r]]= 1 + count.get(s[r],0) # Count the number of times a character appears in the position 'r' of the string
        
        # Checking if the current window is valid
        
        if (r-l+1) - max(count.values()) > k: # 'max(count.values())' count of the most frequent character in the string. '(r-l+1) - max(count.values()) is the count of the most frequent character in the window. if '(r-l+1) - max(count.values())'  is greater than 'k' then the window is invalid and we have to shift the 'l'(left) pointer to make it a valid window.
            
            count[s[l]]-=1 # Decrementing the count of the character at the left pointer.
            l+=1 # Shifting the left pointer
            
        res= max(res, r-l+1) # Update the longest substring, 'r-l+1' is the size of the window.
        
    return res



# Time Complexity: O(26*n) i.e O(n)
# Space Complexity: O(n), HashMap
        
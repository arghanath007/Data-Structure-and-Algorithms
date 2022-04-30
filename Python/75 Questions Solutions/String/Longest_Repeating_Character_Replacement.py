def characterReplacement(s: str, k: int) -> int:
    count={} # HashMap
    res=0 # Longest SubString with 'K' replacements
    
    l=0
    for r in range(len(s)): # Every single position in the string
        count[s[r]]= 1 + count.get(s[r],0) # Count the number of times a character appears
        
        # Checking if the current window is valid
        
        if (r-l+1) - max(count.values()) > k: # 'max(count.values())' count of the most frequent character in the string. '(r-l+1) - max(count.values()) is the number of replacements needed and if it is greater than 'k' then the window is invalid and we have shift the 'l'(left) pointer.
            
            count[s[l]]-=1
            l+=1
            
        res= max(res, r-l+1) # Update the longest substring, 'r-l+1' is the size of the window.
        
    return res
        
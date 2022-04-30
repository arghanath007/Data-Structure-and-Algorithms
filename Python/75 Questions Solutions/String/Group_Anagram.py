from collections import defaultdict


def groupAnagrams(strs: list[str]) -> list[list[str]]:
    res= defaultdict(list) # Mapping the CharCount to the list of Anagrams. Using defaultdict to avoid KeyError, if the char is not present in the string.
    
    for s in strs: # Strings
        count=[0] * 26 # a-z
        
        for c in s: # Characters in the string
            count[ord(c) - ord('a')]+=1 # Counting the freq. of the character
            
        res[tuple(count)].append(s) # Appending the string to the list of anagrams
        
    return res.values() # Returning the list of anagrams. We want the values or the anagrams grouped together and not the keys.


# Time Complexity: O(m*n) , 'm' is the length of the string and 'n' is the avg. length of the string in the list.
# Space Complexity: O(n), Since we are using HashMap.
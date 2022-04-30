from collections import Counter

def isAnagram(s: str, t: str) -> bool:
    # return Counter(s) == Counter(t)  # It is used to count hashable objects. It implicitly creates a hash table of an iterable when invoked.
    
    if len(s)!= len(t):
        return False
    
    countS, countT= {}, {}  # HashMaps for the strings
    
    for i in range(len(s)):
        countS[s[i]]= 1 + countS.get(s[i],0)  # Counting the characters in the string and storing them in the HashMaps. 
        countT[t[i]]= 1 + countT.get(t[i],0)  # 'countT.get(t[i],0)' is used to avoid KeyError. If there is no value at 't[i]' then it returns 0 as the default value which avoids the error.
        
    for i in countS:
        if countS[i] != countT.get(i,0):  # Checking if the count of the characters in the string(s) is equal to the count of the characters in the other(t) string. If any of the counts is not equal, then the strings are not anagrams.
            return False
        
    return True



def isAnagram_saving_space(s: str, t: str) -> bool:  
    
    return sorted(s) == sorted(t)

    # Maybe have to write your own sorting function with time complexity of O(n log n)     


s = "anagram"
# t = "nagaram"
t='ananang'

print(isAnagram(s, t))
    
#! Time Complexity: O(s + t)
#! Space Complexity: O(s + t), # Two Hash maps of size 's' and 't'


print(isAnagram_saving_space(s, t))

# Follow Up Question, to solve it in O(1) space.
#! Time Complexity: O(s + t)
#! Space Complexity: O(1)

#* Counter Source: https://www.geeksforgeeks.org/python-counter-objects-elements/
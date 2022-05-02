
def minWindow(s, t):
    if len(s) < len(t):  # Edge case
        return ""
        
    if s == t:          # Edge case
        return s
    
    map = {} #HashMap
    count = 0 # To keep track of the number of characters matching the characters in 't'.
    for i in t:    # Creating the HashMap for the 't' string and counting the frequency of each element in 't'.
        if i in map.keys():
            map[i] += 1
        
        else:
            map[i] = 1
            count += 1
    
    
    i = 0
    j = 0
    
    found = False   # To maintain the status of whether the window(substring) is found or not.
    
    left =  0 # Left Pointer
    right = len(s) - 1 # Right Pointer
    minimum = len(s)  # To maintain the minimum length of the window(substring).
    
    while j <= len(s):
    
        if count > 0:
            
            if j == len(s):
                break
            
            if s[j] in map.keys():  # 'map' counts the frequency of each element in 't'.
                
                map[s[j]] -= 1
                
                if map[s[j]] == 0:
                    count -= 1
                    
            j += 1
                
        else:
            
            if s[i] in map.keys():
                
                map[s[i]] += 1
                
                if map[s[i]] == 1:
                    count += 1
                
            i += 1
                
            if j+1 - i <= minimum :
                left = i-1
                right = j
                minimum = j+1 - i
                found = True
        
        #print(s[i: j])
        
    if found:
        return s[left:right]
    
    else:
        return ""


s = "ADOBECODEBANC" 
t = "ABC"

print(minWindow(s,t))
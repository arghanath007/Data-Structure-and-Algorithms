def isValid(s: str) -> bool:
    stack= []  # Python List
    
    closeToOpen={"}":"{", 
                 "]":"[",
                 ")":"("}   # HashMap
    
    
    for char in s:
        if char in closeToOpen:
            if stack and stack[-1] == closeToOpen[char]:   # Checking if the 'stack' is not empty and if the last element added to the 'stack' is equal to the value of the 'closeToOpen' dictionary. 'stack[-1]' is the last element added to the 'stack' or the top value in the stack.
                stack.pop()
                
            else: # Since the parenthesis do not match, or the string started with a closing parenthesis.
                return False
            
        else:
            stack.append(char)
            
    return True if not stack else False  # Return 'True' if the stack is empty or 'False' if the stack is not empty.
            
    
    
    
    
    
    
    
    
# Time Complexity: O(n)
# Space Complexity: O(n)

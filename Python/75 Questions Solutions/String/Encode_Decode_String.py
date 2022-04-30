def encode(str1):
    res=""
    
    for i in str1:
        res+= str(len(i)) + "#" + i    # 'str(len(i))' is the length of the current word. '#' is the delimiter. 'i' is the current word.
        
    return res


def decode(str2):
    
    res, i=[],0 
    
    while i < len(str2): # This is doing to read one entire word.
        j=i
        while str2[j]!='#':  # Trying to find the interger number which is just before the '#' 
            j+=1            # 'j' is pointing to the '#' or delimiter.
            
        length=int(str2[i:j]) # 'length' is the length of the current word.
        res.append(str2[j+1 : j+1 + length]) # This is the current word and we are appending it to the list.
        
        i= j+1 +length # Now 'i' is pointing to the end of the entire string or the beginning of the next word/string.
        
    return res




# Time Complexity: O(n) For both Encode and Decode, 'n' is the total number of characters in the list of words.
# Space Complexity: O(n), as we are storing the list of words in a list in decode or making a big string in Encode.
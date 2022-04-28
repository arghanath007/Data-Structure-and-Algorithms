def spiralOrder(matrix: list[list[int]]) -> list[int]:
    
    res=[]
    left, right=0, len(matrix[0])  # Length of the matrix of the first row
    top, bottom =0, len(matrix)   # Length of the matrix
    
    
    while left < right and top < bottom:
        
        # Left to right, get every 'i' in the top row.
        for i in range(left, right): # left to right-1, since right is non-inclusive.
            res.append(matrix[top][i])
            
        top+=1 # Shifting 'top' down by 1.
            
        # get every 'i' in the right col.
        
        for i in range(top, bottom):
            res.append(matrix[i][right-1]) # Since 'right' is out of bounds
            
        right-=1 # Shifting 'right' left by 1.
            
            
        if not (left < right and top < bottom):  # [1,2,3]]
            break
        
        # get every 'i' in the bottom row. From right to left in reverse order.
        
        for i in range(right-1, left-1, -1):
            res.append(matrix[bottom-1][i]) # Since 'bottom' is out of bounds
            
        bottom-=1 # Shifting 'bottom' to up by 1.
        
        # get every 'i' in the leftmost col. From bottom to top in reverse order.
        
        for i in range(bottom-1, top-1,-1):
            res.append(matrix[i][left])
            
        left+=1 # Shifting 'left' to right by 1.
    
    return res
            
        
    
    
    
    
    
# Time Complexity: O(m*n) where m is the number of rows and n is the number of columns
# Space Complexity: O(1)
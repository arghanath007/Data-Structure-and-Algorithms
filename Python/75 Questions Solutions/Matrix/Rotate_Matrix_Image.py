def rotate(matrix: list[list[int]]) -> None:

    left,right=0, len(matrix)-1  # No. of rows and columns are the same as it is a square matrix.
    
    while left < right:
        for i in range(right-left):
            top, bottom=left,right
            
            # Save the Topleft value. Since we are going in Anti-clockwise direction.
            topLeft= matrix[top][left+i]
            
            # Move Bottom left into top left
            matrix[top][left+i]= matrix[bottom-i][left]
            
            # Move Bottom right into bottom left
            matrix[bottom-i][left]= matrix[bottom][right-i]
            
            # Move top right into bottom right
            matrix[bottom][right-i]= matrix[top+i][right]
            
            # Move top left into top right
            matrix[top + i][right]= topLeft
            
        right-=1
        left+=1
 
matrix=[[1,2,3],[4,5,6],[7,8,9]]      

rotate(matrix)
print(matrix) 

# Time ComplexityL O(n^2)
# Space Complexity: O(1) 
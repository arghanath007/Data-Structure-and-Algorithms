def setZeroes(matrix: list[list[int]]) -> None:
    """
    Do not return anything, modify matrix in-place instead.
    """
    
    ROWS = len(matrix)
    COLS = len(matrix[0])
    
    first_row_has_zero = False
    first_col_has_zero = False
    
    # iterate through matrix to mark the zero row and cols
    for row in range(ROWS):
        for col in range(COLS):
            if matrix[row][col] == 0:
                if row == 0:
                    first_row_has_zero = True
                if col == 0:
                    first_col_has_zero = True
                matrix[row][0] = matrix[0][col] = 0

    # iterate through matrix to update the cell to be zero if it's in a zero row or col
    for row in range(1, ROWS):
        for col in range(1, COLS):
            matrix[row][col] = 0 if matrix[0][col] == 0 or matrix[row][0] == 0 else matrix[row][col]
    
    # update the first row and col if they're zero
    if first_row_has_zero:
        for col in range(COLS):
            matrix[0][col] = 0
    
    if first_col_has_zero:
        for row in range(ROWS):
            matrix[row][0] = 0
    
    
    
# Time Complexity is: O(ROWS * COLS)
# Space Complexity is: O(1)
def exist(board: list[list[str]], word: str) -> bool:
    
    ROWS, COLS= len(board), len(board[0])
    path=set()
    
    def dfs(r,c,i):
        if i==len(word):  # If we wound the word.
            return True
        
        if(r < 0 or c <0 or r >=ROWS or c >= COLS or word[i] !=board[r][c] or (r,c) in path): # if we are out of bounds, if we see the same character twice, if we find a character that we are not looking for then we return false.
            return False
        
        path.add((r,c))
        res=(dfs(r+1,c,i+1) or dfs(r-1,c,i+1) or dfs(r,c+1,i+1) or dfs(r,c-1,i+1)) # 'i+1' because we found the character we are looking for. Running dfs on all of the adjacent cells.
        
        path.remove((r,c))
        return res
    
    
    for r in range(ROWS):
        for c in range(COLS):
            if dfs(r,c,0):
                return True
            
    return False




# Time Complexity: O(n*m* 4^n), where n is the number of rows and m is the number of columns.
# Space Complexity: O(n)
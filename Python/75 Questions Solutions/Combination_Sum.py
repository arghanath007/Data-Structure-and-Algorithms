def combinationSum(candidates: list[int], target: int) -> list[list[int]]:
    res=[]
    
    def dfs(i, current, total):
        if total== target:
            res.append(current.copy()) # We are appending a copy of the current list because we are going to modify it later on.
            return
        
        if total > target or i>= len(candidates):
            return
        
        current.append(candidates[i]) # Adding the current element to the current list.
        dfs(i, current, total+ candidates[i]) # Recursive call with the current element added to the current list.
        current.pop() # Removing the current element from the current list.
        dfs(i+1, current, total)
        
    dfs(0, [], 0)
    return res
    
    
candidates=[2,3,6,7]
target=7

print(combinationSum(candidates,target))
def canFinish(numCourses: int, prerequisites: list[list[int]]) -> bool:
    
    preMap={ i: [] for i in range(numCourses) } # Mapping each course to its prerequisites list
    
    for crs,pre in prerequisites:   # 'crs' courses, 'pre' prerequisites. Appending the prerequisites of the courses to themselves.
        preMap[crs].append(pre)
        
        
    visitSet=set() # Contains all of the courses along the Current DFS path.
    
    def dfs(crs):
        if crs in visitSet:
            return False
        
        if preMap[crs]== []:
            return True
        
        visitSet.add(crs)
        for pre in preMap[crs]:
            if not dfs(pre):
                return False
        visitSet.remove(crs)
        preMap[crs]=[]
        return True
    
    for crs in range(numCourses):
        if not dfs(crs):
            return False
    return True



numCourses = 2 
prerequisites = [[1,0]]

print(canFinish(numCourses, prerequisites))
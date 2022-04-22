def insert(intervals: list[list[int]], newInterval: list[int]) -> list[list[int]]:
    res=[]
    
    for i in range(len(intervals)):
        if newInterval[1] < intervals[i][0]: # newInterval is before intervals[i]
            res.append(newInterval)
            return res + intervals[i:]
        
        elif newInterval[0] > intervals[i][1]: # newInterval is after intervals[i]
            res.append(intervals[i])
        
        else: # newInterval overlaps with intervals[i]
            newInterval=[min(newInterval[0], intervals[i][0]), max(newInterval[1], intervals[i][1])]
            
    res.append(newInterval)
    return res



intervals = [[1,3],[6,9]] 
newInterval = [2,5]           

print(insert(intervals, newInterval))
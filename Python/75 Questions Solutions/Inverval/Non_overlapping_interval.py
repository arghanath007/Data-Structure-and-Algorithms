# Time Complexity: O(nlogn)
# Space Complexity: O(1)


def eraseOverlapIntervals(intervals: list[list[int]]) -> int:
    
    intervals.sort()
    res=0
    prevEnd=intervals[0][1]
    for start, end in intervals[1:]:
        if start >= prevEnd: # If true, then no overlapping.
            prevEnd=end
            
        else:
            res+=1 # Increasing the count as we have to erase the overlapping interval.
            prevEnd=min(end, prevEnd) # Joining the overlapping intervals by taking the minimum of the end points.
            
    return res



intervals = [[1,2],[2,3],[3,4],[1,3]]
print(eraseOverlapIntervals(intervals))                
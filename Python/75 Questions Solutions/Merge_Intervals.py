def merge(intervals: list[list[int]]) -> list[list[int]]:
    
    intervals.sort(key=lambda i: i[0]) # Sorting the list by the first element of the sublist.
    output= [intervals[0]]
    
    for start,end in intervals[1:]: # Since the list is sorted, we can start from the second element as the first element is already added to the output list
        lastEnd=output[-1][1]
        
        if start <=lastEnd:
            output[-1][1]=max(lastEnd,end)
            
        else:
            output.append([start,end])
            
    return output



intervals = [[1,3],[2,6],[8,10],[15,18]]
print(merge(intervals))
    
    
    
    
    
    
# Time Complexity: O(nlogn)
# Space Complexity: O(n)
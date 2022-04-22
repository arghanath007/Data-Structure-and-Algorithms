def merge(intervals: list[list[int]]) -> list[list[int]]:
    
    intervals.sort(key=lambda i: i[0]) # Sorting the list by the first element of the sublist.
    output= [intervals[0]]
    
    for start,end in intervals[1:]: # Since the list is sorted, we can start from the second element as the first element is already added to the output list
        lastEnd=output[-1][1] # 'output[-1]' -> Get the most recently added interval in the output list. 'output[-1][1]' -> Gets the end value of the most recently added interval in the output list.
        
        if start <=lastEnd: # If this is 'true' which means there is overlapping.
            output[-1][1]=max(lastEnd,end)
            
        else:
            output.append([start,end]) # If this is 'false', then there is no overlapping, just simply append the interval to the 'output' list.
            
    return output


#            0      1     2     3
intervals = [[1,3],[2,6],[8,10],[15,18]]
print(merge(intervals))


# intervals=    1       2                   3
# Output=   [[1,6],]    [[1,6],[8,10]]      [[1,6],[8,10],[15,18]]
# start=    2           8                   15
# end=      6           10                  18
# lastEnd=  3           6                   10

    
    
    
    
    
    
# Time Complexity: O(nlogn) , since we are sorting the intervals
# Space Complexity: O(n)
# Time Complexity: O(nlogn)
# Space Complexity: O(n)

def MeetingRoom2(intervals):
    start= sorted([i.start for i in intervals]) # Sorting the starting values
    end= sorted([i.end for i in intervals]) # Sorting the ending values
    
    res,count=0,0
    startPoint,endPoint=0,0 # Pointers for the starting and ending list
    while start < len(intervals):
        if start[startPoint] < end[endPoint]: # Meeting started
            startPoint+=1
            count+=1
            
        else: # Meeting ended
            endPoint+=1
            count-=1
            
        res= max(res,count)
        
    return res
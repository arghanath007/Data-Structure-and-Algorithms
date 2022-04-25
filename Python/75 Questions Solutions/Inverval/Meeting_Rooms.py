# Time Complexity: O(nlogn) 
# Space Complexity: O(1)



# Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end


def can_attend_meetings(intervals):
    intervals.sort(key=lambda number: number.start)
    
    for i in range(1, len(intervals)):
        previous= intervals[i-1] # Previous Interval
        current= intervals[i] # Current Interval
        
        if previous.end > current.start: # If True, there there is overlapping of meeting timings
            return False
        
    return True

    
    
    
intervals=[(0,30),(5,10),(15,20)]

print(can_attend_meetings(intervals))

    
    

       
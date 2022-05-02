import heapq


class MedianFinder:

    def __init__(self):
        # Two heaps, large(min heap) and small(max heap)
        
        self.small, self.large=[],[]

    def addNum(self, num: int) -> None:
        heapq.heappush(self.small, -1 *num) # By default in python, min heap is implemented. But to make it max heap, we need to pass '-1' with 'num'. We are taking 'num' and adding it to self.small(max heap).

        # Making sure the numbers in 'small' are '<=' to the numbers in 'large'.
        
        if self.small and self.large and (-1*self.small[0]) > self.large[0]: # Heaps are implemented as lists. So, to get the largest/max value from 'small' we can do 'small[0]'. '-1*self.small[0]' to get the actual value as we had multiplied '-1' with 'num' in 'small' above. 'self.large[0]' to get the smallest/min value from 'large' and we don't have to multiply '-1' as 'large' is a min heap by default and we want it to be a min heap.
            val=-1 * heapq.heappop(self.small) # Pop from the 'small' heap
            heapq.heappush(self.large, val) # Push the 'val' to the 'large' heap
            
            
            # Difference is greater than 1
            
            if len(self.small) > len(self.large) +1: # 2 or greater
                val=-1 * heapq.heappop(self.small) 
                heapq.heappush(self.large, val)
                
            if len(self.large) > len(self.small) +1:
                val=heapq.heappop(self.large) 
                heapq.heappush(self.small, -1 * val)
                
    def findMedian(self) -> float:
        # Odd Length
        
        if len(self.small) > len(self.large):
            return (-1*self.small[0])
        
        if len(self.large) > len(self.small):
            return self.large[0]
        
        return ((-1 * self.small[0]) + self.large[0])/2  # Returning the median


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()





# Add or remove element from Heap: O(log n) 
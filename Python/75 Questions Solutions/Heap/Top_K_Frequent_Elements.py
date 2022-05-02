def topKFrequent(nums: list[int], k: int) -> list[int]:
    count={} #HashMap
    freq=[[] for i in range(len(nums)+1)]  # Index is the freq. of the element and value is the list of elements with that freq.
    
    for n in nums:
        count[n] = 1 + count.get(n,0)  # Counting the frequency of each element in 'nums', Count -> {1:3,2:2,3:1}
        
    for n,c in count.items(): # This will return the key:value pair of the hashmap
        freq[c].append(n)  # 'n' is the element and 'c' is the frequency of that element. We are saying that 'n' element has a frequency of 'c' .
        # freq -> [3:[1], 2:[2], 1:[3]]
        
    res=[]
    
    for i in range(len(freq)-1,0,-1): # Going it descending order up-to index '0'.
        for n in freq[i]: # Since every freq(as it is the index) has a list of values
            res.append(n)
            if len(res) == k:
                return res  # We are returning here as mentioned in the question, 'k' number of elements are unique in the list.
            
            
        
            
        
nums=[1,1,1,2,2,3]
k=2
print(topKFrequent(nums,k))
    
    
    
#! Bucket Sort
# Time Complexity: O(n)
# Space Complexity: O(n)
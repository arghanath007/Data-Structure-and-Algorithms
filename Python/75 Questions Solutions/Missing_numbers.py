def missingNumber(nums: list[int]) -> int:
    
    # First Part
    
    
    # map={}
    # length= len(nums)
    # for i in range(0,length+1):
    #     map[i]=i
        
    # print(map)
    # for i in map:
    #     if i in nums:
    #         continue
    #     else:
    #         return i
    # return -1
    
    # Second Part
    
    # sumNumbers=sum(nums)
    # length= len(nums)
    # s=0
    # for i in range(0,length+1):
    #     s+=i
        
    # return abs(sumNumbers-s)
    
    res=len(nums)
    
    for i in range(len(nums)):
        res+= (i-nums[i])
        
    return res
        
        
            
    
    
nums=[3,0,1]
print(missingNumber(nums))

# First Part
# Time Complexity: O(n)
# Space Complexity: O(n)


# Second Part
# Time Complexity: O(n)
# Space Complexity: O(1)
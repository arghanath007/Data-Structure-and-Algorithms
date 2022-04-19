
def lengthOfLIS(nums: list[int]) -> int:
    
    LIS= [1] * len(nums)
    
    for i in range(len(nums) -1, -1,-1): # Start from the end of the list
        for j in range(i+1, len(nums)):
            if nums[i] < nums[j]:
                LIS[i]=max(LIS[i], 1 + LIS[j])
                
    return max(LIS)



nums=[10,9,2,5,3,7,101,18]
print(lengthOfLIS(nums))
    

# Time Complexity: O(n^2)
# Space Complexity: O(n)
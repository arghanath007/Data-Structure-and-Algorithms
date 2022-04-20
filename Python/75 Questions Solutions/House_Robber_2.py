def rob(nums: list[int]) -> int:
    
    def helper(nums):
        rob1, rob2=0,0
        
        for n in nums:
            newRob= max(n + rob1, rob2)
            rob1=rob2
            rob2=newRob
            
        return rob2
    
    maximum= max(nums[0], helper(nums[1:]), helper(nums[:-1])) # 'helper(nums[1:])' is the maximum amount we can rob if we do not rob the first house. 'helper(nums[:-1])' is the maximum amount we can rob if we do not rob the last house.
    return maximum
    
    
    
    
nums=[2,3,2]
print(rob(nums))


# Time Complexity: O(n)
# Space Complexity: O(1)
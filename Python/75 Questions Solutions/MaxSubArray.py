def maxSubArray(nums: list[int]) -> int:
    maxSum=nums[0]
    curSum=0
    
    for n in nums:
        if curSum<0:
            curSum=0
        
        curSum += n
        maxSum=max(maxSum,curSum)
        
    return maxSum



nums=[-2,1,-3,4,-1,2,1,-5,4]
print(maxSubArray(nums))
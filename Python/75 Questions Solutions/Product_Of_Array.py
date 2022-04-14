def productExceptSelf(nums: list[int]) -> list[int]:
    res= [1]*(len(nums)) # Initialize result array with values of '1' with the count of the length of the array 'nums' here.
    prefix=1
    
    for i in range(len(nums)):
        res[i]=prefix
        prefix*= nums[i]
        
    postfix=1
    for i in range(len(nums)-1,-1,-1):  # Start from the end of the array 'nums' here.
        res[i]*=postfix
        postfix*=nums[i]
        
    return res



nums=[1,2,3,4]
print(productExceptSelf(nums))

# Time complexity: O(n)
# Space complexity: O(1)
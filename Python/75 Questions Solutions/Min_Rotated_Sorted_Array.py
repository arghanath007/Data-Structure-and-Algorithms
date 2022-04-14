def findMin(nums: list[int]) -> int:
    res=nums[0]
    left,right=0,len(nums)-1
    
    while left <= right:
        if nums[left] < nums[right]:
            res=min(res,nums[left])
            break
        
        mid=(left+right)//2 # '//' is integer division
        res=min(res,nums[mid])
        if nums[mid] >= nums[left]:
            left=mid+1
            
        else:
            right=mid-1
            
    return res


nums=[1,2,3,4,5,6]
# nums=[4,5,6,0,1,2,3]
# nums=[2,1]
print(findMin(nums))
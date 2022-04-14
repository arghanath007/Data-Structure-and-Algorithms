def Two_Sum_Two(nums, target):
    
    left, right = 0, len(nums)-1
    
    while left < right:
        
        sum=nums[left] + nums[right]
        if sum == target:
            return  [left+1, right+1]
        
        elif target > sum:
            left+=1
            
        else:
            right-=1
        
        
        

nums=[2, 7, 11, 15]
target=9

print(Two_Sum_Two(nums, target))
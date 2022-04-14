def threeSum(nums: list[int]) -> list[list[int]]:
    res=[]
    nums.sort()
    
    for i,a in enumerate(nums):
        if i > 0 and a == nums[i-1]:
            continue
        
        left,right= i+1,len(nums)-1
        while left < right:
            sum= a + nums[left] + nums[right]
            if sum >0:
                right-=1
                
            elif sum <0:
                left+=1
                
            else:
                res.append([a,nums[left],nums[right]])
                left+=1
                while(nums[left] == nums[left-1] and left < right):
                    left+=1
    return res


nums=[-1,0,1,2,-1,-4]
print([threeSum(nums)])


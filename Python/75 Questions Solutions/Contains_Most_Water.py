def maxArea(height: list[int]) -> int:
    res=0
    left,right=0, len(height)-1
    
    while left < right:
        area= (right -left) * min(height[left],height[right])
        res=max(res,area)
        
        if height[left] < height[right]:
            left+=1
            
        elif height[left] > height[right]:
            right-=1
            
        else:
            left+=1
            
    return res



height=[1,8,6,2,5,4,8,3,7]
print(maxArea(height)) 
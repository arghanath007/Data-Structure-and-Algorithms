def canJump(nums: list[int]) -> bool:
    # Greedy Approach
    
    goal= len(nums)-1
    
    for i in range(len(nums)-1,-1,-1):
        if i + nums[i] >= goal:
            goal=i
            
    return True if goal==0 else False




# nums=[2,3,1,1,4] # Greedy Approach Dry Run
# len=  5 
# goal= 4               3               2               1               0
# i=    4               3               2               1               0
# if    4+4=8 8>=5      3+1=4  4>=4     2+1=3  3>=3     1+3=4  4>=2     0+2=2   2>=1
nums=[2,0,1,0,4]
print(canJump(nums))


# Bottom Up Dynamic Programming
# Time Complexity: O(n^2)
# Space Complexity: o(n) , since we are using chaching to store the values


# Greedy Solution

# Time Complexity: O(n)
# Space Complexity: o(1)
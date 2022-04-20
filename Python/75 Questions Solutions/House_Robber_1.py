def rob(nums: list[int]) -> int:
    rob1,rob2=0,0
    
    for n in nums:
        newRob=max(n + rob1, rob2 ) # The max we can rob in the current position in 'nums'.
        rob1=rob2
        rob2=newRob
        
    return rob2


# nums=[1,2,3,1]
nums=[2,3,2]
print(rob(nums))


# n=    2   3   4
# rob1= 0   2   3
# rob2= 2   3   4
# temp= 2   3   4
        


# Time Complexity: O(n)
# Space Complexity: O(1)


# [rob1, rob2, n,n+1, ...] -> If we want to rob 'nth' house, then we have to rob 'rob1' house as well as we cannot rob 'rob2' house as it is adjacent to each other(n). If we rob 'rob1' house, then we can't rob 'rob2' house. If we rob 'rob2' house, then we cannot rob 'nth' house as it is adjacent to 'nth' house. 
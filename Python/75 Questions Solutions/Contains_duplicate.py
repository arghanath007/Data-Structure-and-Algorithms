def containsDuplicate_hashSet(nums: list[int]) -> bool:
    hashset=set()
    
    for number in nums:
        if number in hashset:
            return True
        
        hashset.add(number)
    return False


def containsDuplicate_sorted(nums: list[int]) -> bool:
    
    length=len(nums)
    for i in range(length-1):
        for j in range (0,length-i-1):
            if nums[j] > nums[j+1]:
                temp= nums[j]
                nums[j]=nums[j+1]
                nums[j+1]=temp
    
    # nums.sort()
    print(nums)
    
    for i in range(length-1):
        if nums[i] == nums[i+1]:
            return True
        
    return False



# nums=[1,2,15,1]
nums=[2,7,1,15]
print(containsDuplicate_hashSet(nums))

print(containsDuplicate_sorted(nums))



# Time complexity: O(n)
# Space complexity: O(n) [Since we used Hash Map here]
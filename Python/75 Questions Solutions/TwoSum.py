
def TwoSum(nums, target):
    Map={}
    for index, number in enumerate(nums):
        diff= target- number
        if diff in Map:
            return [Map[diff], index]
        
        Map[number]=index
        
        
nums=[2,7,2,15]
target=4
print(TwoSum(nums, target))


## Hash Map with Value: Index pairs

## Time complexity: O(n)
## Space complexity: O(n) [Since we used Hash Map here]

def maxProduct(nums: list[int]) -> int:
    res=max(nums)
    minSub,maxSub=1,1

    for n in nums:
        if n==0:
            minSub,maxSub=1,1
            continue

        temp=maxSub*n
        maxSub=max(maxSub*n, minSub*n,n)
        minSub=min(temp, minSub*n,n)
        res=max(res,maxSub)

    return res

# def maxProduct(nums):

#         max_prod, min_prod, ans = nums[0], nums[0], nums[0]
#         for i in range(1, len(nums)):
#             x = max(nums[i], max_prod*nums[i], min_prod*nums[i])
#             y = min(nums[i], max_prod*nums[i], min_prod*nums[i])            
#             max_prod, min_prod = x, y
#             ans = max(max_prod, ans)
#         return ans



nums=[-2,3,-4]
print(maxProduct(nums))
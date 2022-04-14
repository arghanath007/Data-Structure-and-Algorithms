
def maxProfit(prices: list[int]) -> int:
    left, right=0,1 # left -> buy, right-> sell
    maxProfit=0
    
    while right<len(prices):
        if prices[left] < prices[right]:
            profit= prices[right]-prices[left]
            maxProfit= max(maxProfit,profit)
        
        else:
            left=right
            
        right+=1
        
    return maxProfit




prices=[7,1,5,3,6,4]
print(maxProfit(prices))
        
    












# Time Complexity -> O(n)
# Space Complexity -> O(1)
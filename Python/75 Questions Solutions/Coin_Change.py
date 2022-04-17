# Bottom Up Dynamic Programming

def coinChange(coins: list[int], amount: int) -> int:
    dp=[amount+1] * (amount+1)
    dp[0]=0 # Base case
    
    for a in range(1,amount+1):
        for c in coins:
            if a-c >=0:
                dp[a] = min(dp[a], 1+ dp[a-c])
                
    return dp[amount] if dp[amount] != amount+1 else -1



amount=int(input())
coins=[1,2,5]

print(coinChange(coins,amount))

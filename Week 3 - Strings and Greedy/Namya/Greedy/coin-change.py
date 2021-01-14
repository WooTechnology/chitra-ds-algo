class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        coins.sort()
        coins = coins[::-1]
        print(coins)
        n = 0
        for den in coins:
            n += amount // den 
            amount = amount % den 
        if n != 0: 
            return n 
        else: 
            return -1
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ones = 0
        max_ones = 0
        #keep the edge cases in mind pls
        for i in range(len(nums)):
            if nums[i] == 1:
                ones += 1
            else:
                max_ones = max(max_ones, ones)
                ones = 0
        max_ones = max(max_ones, ones)
        return max_ones

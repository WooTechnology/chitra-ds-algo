class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        charSet = set()
        res, l = 0, 0
        #u are moving the window as and when u get a duplicate character move the 
        #l pointer and then reduce the size of the window
        for r in range(len(s)):
            while s[r] in charSet:
                charSet.remove(s[l])
                l += 1
            charSet.add(s[r])
            res = max(res, r - l + 1)
        return res
from collections import Counter
class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        x = Counter(arr)
        x = dict(sorted(x.items(), key=lambda item: item[1], reverse = True))
        c = 0
        h = len(x)
        for i, j in x.items():
            c += j
            if c < len(arr) // 2:
                h = h - 1
                
        return(len(x) - h + 1)
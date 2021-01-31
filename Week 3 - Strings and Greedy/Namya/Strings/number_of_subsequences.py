from collections import Counter
#optimisation used here is that, a counter is used, else will not get through
class Solution:
    def numMatchingSubseq(self, S: str, words: List[str]) -> int:
        count = 0
        does = set()
        words = Counter(words)
        for word in words:
            
            '''
                BEST WAY TO CHECK IF IT A SUBSEQUENCE
            '''
            
            j = len(word) - 1
            i = len(S) - 1
            
            while i >= 0 and j >= 0:
                if word[j] == S[i]:
                    j -= 1
                i -= 1
            if j == -1:
                count += words[word]
        return count

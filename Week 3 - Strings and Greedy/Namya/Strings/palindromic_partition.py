Link to problem : https://leetcode.com/problems/palindrome-partitioning-iv/submissions/


class Solution:
    def checkPartitioning(self, s: str) -> bool:
        #approach is that u get the palindrome from the start and then from the end, check ehether the string left out is a palindrome
        #return that
        
        all_strings = []
        t = s
        for j in range(1, len(s)):
            stg = s[0:j]
            if stg == stg[::-1]:
                all_strings.append(stg)
        all_strings = (sorted(all_strings, key = len, reverse = True))
        fst = all_strings[0]
        l = len(fst) - 1
        #Longest palindrome from the start
        
        
        s = s[::-1]
        all_strings = []
        for j in range(1, len(s)):
            stg = s[0:j]
            if stg == stg[::-1]:
                all_strings.append(stg)
        all_strings = (sorted(all_strings, key = len, reverse = True))
        thrd = all_strings[0]
        
        #longest palindrome from the end
        
        e = len(s) - len(thrd)
        
        #then check if the string in between them is a palindrome
        return(t[l+1: e] == t[l+1:e][::-1])
       
    

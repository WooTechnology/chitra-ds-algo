class Solution:
    def reverseWords(self, s: str) -> str:
        rev = ""
        for i in s.split():
            rev += i[::-1] + " "
        return rev.strip()
class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        for i in range(len(s)):
            if s[i] in "({[":
                st.append(s[i])
            else:
                try:
                    if s[i] == ")" and st.pop() != "(":
                        return False
                    elif s[i] == "]" and st.pop() != "[":
                        return False
                    elif s[i] == "}" and st.pop() != "{":
                        return False
                except:
                    return False
        if st != []:
            return False
        return True
                
                    
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int n = strs.size();
        if(n == 0) return res;
        if(n == 1) return strs[0];
        
        int index = 0;
        for(char c: strs[0]) //comparing every character of first string with other character of other string
        { 
            for(int j=1; j<n; j++)
            {
                if(c != strs[j][index]) //compares FIRST CHARACTER OF EVERY STRING and then add it to res string
                    return res;
            }
            
            res += c;
            index++;
        } 
        return res;
        }
};
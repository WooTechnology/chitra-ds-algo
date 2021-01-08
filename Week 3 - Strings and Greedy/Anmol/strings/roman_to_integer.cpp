
class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> romNum { {'I', 1}, {'V', 5},{'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
         int n = s.length();
         int val = 0;
         
        for(int i =0 ; i<n; i++){
             int curr = romNum[s[i]];
             int next = romNum[s[i+1]];
             if(curr>=next) {
                 val+=curr;
             }
            else{
               val+= (next-curr);
                i++;
             } 
         }
        return val;
    }
};



// similarly in the below answer attached simple arrays have been used [dp]
//https://leetcode.com/problems/roman-to-integer/discuss/944170/Easy-C%2B%2B-code-or-Faster-than-100
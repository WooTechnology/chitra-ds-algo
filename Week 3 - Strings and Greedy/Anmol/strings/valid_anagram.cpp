// Given two strings s and t , write a function to determine if t is an anagram of s.
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())return false;
            // sort(s.begin(),s.end());
            // sort(t.begin(),t.end());
            // return s == t;  
        
        int counter[26] = {0};
        for(int i = 0; i<s.length(); i++){
            counter[s[i] - 'a']++;
            counter[t[i] - 'a']--;
        }
        
        for(int count: counter){
            if(count != 0) return false;
        }
        return true;
    }
};
// Do we need two counter tables for comparison? Actually no, because we could increment the counter for each letter in ss and decrement the counter for each letter in tt, then check if the counter reaches back to zero.

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(s1.length() > s2.length()) return false;
       
        vector<int> s1hash(26,0);
        vector<int> s2hash(26,0);
        int right = 0,left=0;
        int n1 = s1.length(), n2 = s2.length();
            
        while(right<n1){
            s1hash[s1[right] - 'a']++;
            s2hash[s2[right] -'a']++;
            right++;
        }
    
        right -=1;  // to point right to the end of the window
        while(right<n2)
        {
            if(s1hash==s2hash)
                return true;
            right+=1;
            // remove the first char of current window and add the current char
            if(right!=n2)
                s2hash[s2[right]-'a'] +=1;
            s2hash[s2[left]-'a'] -=1;
            left +=1;
        }
        return false;
    }
};

// Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's permutations is the substring of the second string.
// Example 1:

// Input: s1 = "ab" s2 = "eidbaooo"
// Output: True
// Explanation: s2 contains one permutation of s1 ("ba").

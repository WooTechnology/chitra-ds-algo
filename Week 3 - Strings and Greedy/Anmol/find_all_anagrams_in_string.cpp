class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<int> ans;
        vector<int> hash(26,0);
        vector<int> phash(26,0);
        
        int right = 0,left=0;
        int window = p.length(), len = s.length();
        if(len<window) return ans;
        
        while(right<window){
            hash[s[right] - 'a']++;
            phash[p[right] -'a']++;
            right++;
        }
    
        right -=1;  // to point right to the end of the window
        while(right<len)
        {
            if(hash == phash) ans.push_back(left);
            right+=1;
            // remove the first char of current window and add the current char
            if(right!=len) hash[s[right]-'a'] +=1;
            hash[s[left]-'a'] -=1;
            left +=1;
        }
        return ans;
    }
};


// Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.
// Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.
// The order of output does not matter.
// Input:
// s: "cbaebabacd" p: "abc"

// Output:
// [0, 6]

// Explanation:
// The substring with start index = 0 is "cba", which is an anagram of "abc".
// The substring with start index = 6 is "bac", which is an anagram of "abc".
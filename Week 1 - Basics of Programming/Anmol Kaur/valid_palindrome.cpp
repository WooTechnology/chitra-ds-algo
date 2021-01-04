// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
//  Note: For the purpose of this problem, we define empty string as valid palindrome.

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 1 ||s.size() == 0) return true;
        int i = 0, j = s.size()-1;
        while(i<j)
        {
            if(!isalnum(s[i])) i++;  
            else if(!isalnum(s[j])) j--;
            else if(tolower(s[i]) == tolower(s[j])) {i++;j--;}
            else return false;
        }
        return true;
    }
};
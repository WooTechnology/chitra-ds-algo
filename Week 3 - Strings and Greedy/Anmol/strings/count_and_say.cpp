// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

// countAndSay(1) = "1"
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.

class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        if (n == 1) return res;
      
        string temp = "1";
        for(int i = 2; i<=n ; i++){
            temp = "";
            for(int j = 0; j<res.length(); j++){
                 int count = 1; // every digit is present atleast once
                 while( (j+1)<res.length() && res[j] == res[j+1] ){ //i.e j+1 doesn't exceed the string length
                     count++;  
                     j++;
                 } 
                 temp += to_string(count); //count of digit
                 temp += res[j]; //digit itself   
            }
            res = temp; // save temporary result
        }
      
        return res;
    }
};
class Solution {
public:
    string reverseWords(string s) {
        if(s.size() == 0) return s;
        string res ="";
        stack<string> stack;
        for(int i =0 ;i<s.size(); i++){
            string word;
            if(s[i] == ' ') continue; //skip spaces
            while(i<s.size() && s[i]!=' '){ //store continuous letters into word
                word += s[i];
                i++;
            }
         stack.push(word);   
        }
        while(!stack.empty()){
            res += stack.top(); stack.pop();
            if(!stack.empty()) res += " ";
        }
        return res;
    }
};
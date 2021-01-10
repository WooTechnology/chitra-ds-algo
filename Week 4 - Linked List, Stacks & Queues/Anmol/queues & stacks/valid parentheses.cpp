class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2 == 1) return false;
        
        stack<char> stack;
        for(char ch: s){
            if(ch == '(' || ch =='[' || ch== '{') stack.push(ch);
            else{
                if(stack.empty()) return false; 
                // If current current char isn't opening bracket, then it must be closing.stack cannot be empty at this point; parentheses must be opening first  
                if(ch==')' && stack.top()!='(') return false;
                if(ch=='}' && stack.top()!='{') return false;
                if(ch==']' && stack.top()!='[') return false;
                stack.pop();
            }
        }
         return stack.empty(); 
        //if after all the popping, stack is empty, then it returns true, else false
    }
};

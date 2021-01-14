#include<string.h>
#include<bits/stdc++.h>

//the class myStack has been defined with basic functionalities
int evaluatePostFix(string exp) {
   myStack stack(exp.length());
   for(int i = 0; i < exp.length(); i++){
       if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/'){
           int res = 0;
           int op2 = stack.pop();
           int op1 = stack.pop();
           if (exp[i] == '+'){
               res = op1 + op2;
           }
           else if (exp[i] == '-'){
               res = op1 - op2;
           }
           else if (exp[i] == '*'){
               res = op1 * op2;
           }
           else if (exp[i] == '/'){
               res = op1 / op2;
           }
           else{
               res = op1 ^ op2;
           }
           stack.push(res);
       }
       else{
           char c = exp[i];
           int num = int(c) - 48;
           stack.push(num);
       }
   }
   return(stack.pop());
}

int main(){
 cout << evaluatePostFix("921*-8-4+") << endl; 
}
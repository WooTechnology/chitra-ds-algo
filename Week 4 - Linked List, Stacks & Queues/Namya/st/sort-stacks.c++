#include<bits/stdc++.h>
//here the approach is to use a temporary stack and then push to the
//stack if the element popped out is greater than the top of of the temp
//stack, else pop elements from the temp stack till it is greater than the elements
//below it, if temp stack is empty then just push it, this results in temp stack
//in decreasing order, again pop out the contents and store it in the main stack
//as the requirement is head is pointed to by the smallest element
//class myStack has been defined and has the basic funcrionalities

myStack sortStack(myStack stack, int size) {
    myStack temp(size);
    temp.push(stack.pop());
    while(stack.getSize() != 0){
        int t;
        t = stack.pop();
        if (temp.getSize() == 0){
            temp.push(t);
        }
        else if (t >= temp.getTop()){
            temp.push(t);
        }
        else{
            while(t < temp.getTop()){
            if(temp.getSize() == 0){
                break;
            }
            int y = temp.pop();
            stack.push(y);
            //temp.push(t);
            }
           temp.push(t);
        }
    }
    while(temp.getSize() != 0){
        stack.push(temp.pop());
    }
    return(stack);
    
}
int main(){
    myStack stack(7);
    stack.push(2);
    stack.push(97);
    stack.push(4);
    stack.push(42);
    stack.push(12);
    stack.push(60);
    stack.push(23);
    (sortStack(stack, 7)).showStack();
}
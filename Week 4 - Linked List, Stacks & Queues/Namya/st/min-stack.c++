//in this approach, u need an auxillary stack and store the min/max element at the top and pop accordingly
//so this ensures that the topmost element is the min/max till what has been seen in the stack
#include<cassert>
#include<iostream>
using namespace std;

//can be modified to max stack by changing the min condition
class newStack {
   public:
   int size, capacity, value, numElements, nof;
   int *stack, *temp, *max_stk;
   newStack(int size) {
    capacity = size;
    stack = new int[capacity];
    temp = new int[capacity];
    max_stk = new int[capacity];
    assert(stack != NULL);
    numElements = 0;
    nof = 0;
   }
   bool isEmpty() {
        return (numElements == 0);
    }
    int getTop() {
        return (numElements == 0 ? -1 : stack[numElements - 1]);
    }
    int min() {
        return (temp[numElements-1]);
    }
    int max() {
        return (max_stk[numElements-1]);
    }
    bool push(int value) {
        if (numElements < capacity) {
            stack[numElements] = value;
            if(numElements == 0){
                temp[numElements] = value;
                max_stk[numElements] = value;
            }
            else{
                temp[numElements] = temp[numElements-1] > value ? value : temp[numElements-1];
                max_stk[numElements] = max_stk[numElements-1] < value ? value : max_stk[numElements-1];
            }
            numElements++;
            return true;
        } else {
            cout << "Stack Full." << endl;
            return false;
        }
    }
    void show(){
        for(int i = 0; i < numElements; i++){
            cout<<temp[i]<<" ";
        }
    }
    int pop() {
        if (numElements == 0) {
            cout << "Stack Empty" << endl;
            return -1;
        } else {
            numElements--;
            nof--;
            return stack[numElements];
        }
    }
    int getSize() {
        return numElements;
    }

};

int main(){
    newStack stack(6);
    stack.push(5);
    cout << stack.min() << endl;
      cout << stack.max() << endl;
    stack.push(2);
    cout << stack.min() << endl;
      cout << stack.min() << endl;
    stack.push(4);
    cout << stack.min() << endl;
      cout << stack.min() << endl;
    stack.push(1);
    cout << stack.min() << endl;
      cout << stack.min() << endl;
    stack.push(3);
    cout << stack.min() << endl;
      cout << stack.min() << endl;
    stack.push(9);
   
   cout << stack.min() << endl;
     cout << stack.min() << endl;
  
 return 0; 
}
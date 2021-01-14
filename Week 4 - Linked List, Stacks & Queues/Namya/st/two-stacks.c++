#include<iostream>
using namespace std;
//often pre and post increment and decrement may pose a problem,
//the best is to use the equation
//here stack1 starts from 0 while stack2 starts from the end
//soo stack1 moves ->  while stack2 moves <-
//this is only useful for 2 stacks, there might be a need to represent k stacks
//there is a different approach for that

class twoStacks {

private:
    int size;
    int *arr;
    int top1, top2;
   
public:
    twoStacks(int n) {
        size = n;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
 
    void push1(int value) {
      if(top1 >= top2){
          cout<<"Stack full"<<endl;
      }
      else{
          top1 = top1+ 1;
          arr[top1] = value;      
          
      }
    }
 
    void push2(int value) {
      if(top2 <= top1){
          cout<<"Stack Empty"<<endl;
      }
      else{
          top2 = top2 - 1;
          arr[top2] = value;
      }
    }

    int pop2() {
        if(top2 > size - 1){
            top2 = size;
            return -1;      
        }
        else{
            int t = arr[top2];
            top2 = top2 + 1;
            return(t);
        }
    }
    void display(){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    int pop1() {
        if(top1 < 0){
            top1= -1;
            return -1;
        }
        else{
            int t = arr[top1];
            top1 = top1 - 1;
            return(t);
        }
       
    }
};

int main(){  
   twoStacks tS(5);
    tS.push1(11);
    tS.push1(3);
    tS.push1(7);
    tS.push2(1);
    tS.push2(9);
  cout << tS.pop1() << endl;
  cout << tS.pop2() << endl;
  cout << tS.pop2() << endl;
  cout << tS.pop2() << endl;
  cout << tS.pop1() << endl;

  return 0; 
}
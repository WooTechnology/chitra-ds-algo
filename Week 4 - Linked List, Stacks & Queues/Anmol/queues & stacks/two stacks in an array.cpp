// Your task is to implement  2 stacks in one array efficiently.
// You don't need to read input or print anything. You are required to complete the 4 methods push1, push2 which takes one argument an integer 'x' to be pushed into stack one and two and pop1, pop2 which returns the integer poped out from stack one and two. If no integer is present in the array return -1.

// Expected Time Complexity: O(1) for all the four methods.
// Expected Auxiliary Space: O(1) for all the four methods

/*The structure of the class is
class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
public:
   twoStacks(int n=100){
   size = n; 
   arr = new int[n]; 
   top1 = -1; 
   top2 = size;}
 
   void push1(int x);
   void push2(int x);
   int pop1();
   int pop2();
};
*/


/* The method push to push element into the stack 1 */
void twoStacks :: push1(int x)
{
   if( top1 < top2 - 1) // there is atleast one space to push the element
    {
        top1++;
        arr[top1] = x;
    }
}
   
/* The method push to push element into the stack 2*/
void twoStacks ::push2(int x)
{
   if(top1 < top2 -1 ) // there is atleast one space left to push the element
    {
        top2--;
        arr[top2] = x;
    }
    
}
   
/* The method pop to pop element from the stack 1 */
//Return the popped element
int twoStacks ::pop1()
{
    if(top1 >= 0){
        int x = arr[top1];
        top1--;
        return x;
    }
   return -1;
}

/* The method pop to pop element from the stack 2 */
//Return the popped element
int twoStacks :: pop2()
{
   if(top2 < size){
       int x = arr[top2];
       top2++;
       return x;
   }
  return -1;
}

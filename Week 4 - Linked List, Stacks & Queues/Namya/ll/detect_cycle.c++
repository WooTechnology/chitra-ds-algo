#include<bits/stdc++.h>
struct Node{
    int val;
    Node* nextElement;
}*head;
bool detectLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL && fast -> nextElement != NULL){
        //moving at a speed of x and 2x if there is a loop they will always meet
        //its like in a race, a person with speed x and 2x will always meet atleast once, 
        //so that is the basic idea, where the pointers, if there is a loop will always meet once
        //the rate needs to be relatively prime owing to the fact that if they are not then there is a chance that all the nodes might not be covered
        slow = slow -> nextElement;
        fast = (fast -> nextElement) -> nextElement;
        if(slow == fast){
            return(true);
        }
    }
    return(false);

}
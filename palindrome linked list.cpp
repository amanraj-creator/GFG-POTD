/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        if (head == NULL || head->next == NULL) {
        return true; // Empty list or single node is a palindrome
        }

      // step-1:Finding middle of the list
       Node *slow=head, *fast=head;
       while(fast!=NULL and fast->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }

       //slow=middle element
       //step-2: Reverse the second half

       Node*prev=NULL,*curr=slow;
       while(curr!=NULL){
           Node* temp=curr->next;
           curr->next=prev;
           prev=curr;
           curr=temp;
       }
       //prev=head of reversed second half
       //step-3:compare the two halves

       Node* left=head,*right=prev;
       while(right!=NULL){
          if(left->data!=right->data){
              return false;
           } 
           left=left->next;
           right=right->next;
       }
       return true;
    }
};

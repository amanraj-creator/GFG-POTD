class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        //step-1: creating new node and setting its data
        Node *newNode=new Node(); // creating a new node
        newNode->data=x; //setting node's data to x
        
     //step-2: checking if the list is empty or if the new node
     //should be new head
     if(!head || head->data>=x){
         newNode->next=head;
         return newNode; //new node becomes the new head
     }
     //step-3: Traverse the list to find the correct position
     Node *curr=head;
     while(curr->next and curr->next->data<x){
         curr=curr->next;
     }
    //step-4: Insert the new node at correct position
   newNode->next=curr->next; //Link newNode to the next node in sequence
   curr->next=newNode;//Link current node to the newNode
   
    //step-5: Return the head of the updated list
    return head;
    }
};

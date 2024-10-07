/*
Structure of linked list is as
struct Node
{
    int data;
    struct Node* npx;

    Node(int x){
        data = x;
        npx = NULL;
    }
};

Utility function to get XOR of two Struct Node pointer
use this function to get XOR of two pointers
struct Node* XOR (struct Node *a, struct Node *b)
{
    return (struct Node*) ((uintptr_t) (a) ^ (uintptr_t) (b));
}
*/


// function should insert the data to the front of the list
struct Node *insert(struct Node *head, int data) {
 // Create a new node with the given data
    Node* newNode= new Node(data);
    //case 1: Empty LL
    newNode->npx=head;
    //case 2: Non-Empty LL
    if(head!=NULL){
// The new head's npx should now be XOR of the new node and the next node
        head->npx=XOR(newNode,head->npx);
    }
    return newNode;
}
// Function to traverse the XOR linked list and return the data in a vector
vector<int> getList(struct Node *head) {
// Initialize two pointers, previous and current
   Node* curr=head,*prev=NULL;
   vector<int>ans;
    // Traverse the list
   while(curr){
// Add current node's data to result 
       ans.push_back(curr->data);
// Get the next node using XOR of current npx and previous node
     Node* next=XOR(prev,curr->npx);
// Move previous and current pointers forward
       prev=curr;
       curr=next;
   }
   return ans;
}

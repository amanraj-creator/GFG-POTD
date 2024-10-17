class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
 // First of all, check if the input linked list is empty 
 // or contains only one node
        if(!head)
            return {NULL, NULL};
        if(head && !head->next)
            return {head, NULL};
//Initialize two header nodes, head1 for the first node (even index) 
//and head2 for the second node (odd index) 
//storing the nodal data of head and head->next            
        Node *head1 = head, *head2 = head->next;
//Use two  pointer nodes, ptr1 and ptr2, to traverse and build
//the two new lists using the linking of nodes.        
        Node *ptr1 = head1, *ptr2 = head2;
   //Traversal and Splitting    
        while(ptr1 && ptr2){
       //For ptr1, set its next pointer 
      //to skip one node (i.e., ptr1->next = ptr1->next->next), 
     //effectively moving to the next even-indexed node.
    //For ptr2, do the same to skip to the next odd-indexed node
    
  //check whether the nodes ptr1->next and ptr2->next exists 
  //in the original list, otherwise set it as NULL.
            ptr1->next = ptr1->next ? ptr1->next->next : NULL;
            ptr2->next = ptr2->next ? ptr2->next->next : NULL;
//After updating the next pointers, advance ptr1 and ptr2 to 
//their respective next nodes.            
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
//Finally, return a vector containing the heads of the two new lists        
        return {head1, head2};
    }
};

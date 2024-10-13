class Solution {
  public:
    void deleteAlt(struct Node *head) {
//If the list is empty or has only one node,no alternates to delete
       if (head == NULL || head->next == NULL){
           return;
        }
        
        Node* temp=head;
        while(temp && temp->next){
            Node* delNode=temp->next;
            temp->next=temp->next->next;
            delete delNode;
            temp=temp->next; 
        }
    }
};

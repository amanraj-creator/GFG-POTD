class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        if(head==NULL) return;
        Node* slow=head;
        Node* fast=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        if(fast==NULL||fast->next==NULL) return;
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        while(slow->next!=fast){
            slow=slow->next;
        }
        slow->next=NULL;
    }
};

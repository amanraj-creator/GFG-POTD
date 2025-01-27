class Solution {
  public:
    Node* findFirstNode(Node* head) {
         if(head==NULL) return NULL;
         Node* slow=head;
         Node* fast=head;
         while(fast and fast->next){
             fast=fast->next->next;
             slow=slow->next;
             if(slow==fast) break;
         }
         if (slow!=fast) return NULL;
         slow=head;
         while(slow!=fast){
             slow=slow->next;
             fast=fast->next;
         }
         return slow;
    }
};

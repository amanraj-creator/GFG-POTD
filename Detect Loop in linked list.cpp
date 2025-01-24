class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
         Node* slow=head;
         Node* fast=head;
         while(fast and fast->next){
             fast=fast->next->next;
             slow=slow->next;
             if(slow==fast){
                 return true;
             }
         }
         return false;
    }
};

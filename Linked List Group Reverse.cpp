class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
      Node* curr=head;
      Node* prev=nullptr;
      Node* temp=nullptr;
      int count=0;
      while(curr!=NULL and count<k){
          temp=curr->next;
          curr->next=prev;
          prev=curr;
          curr=temp;
          count++;
      }
      if(temp){
          head->next= reverseKGroup(temp,k);
      }
      return prev;
    }
};

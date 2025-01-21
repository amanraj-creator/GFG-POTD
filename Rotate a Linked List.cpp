class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if(k==0 ||!head ||!head->next) return head;
        Node *temp=head;
        int cnt=1;
        while(temp->next){
            temp=temp->next; // TEMP ko last me lana h
            cnt++; // count of nodes
        }
        k=k%cnt; // no of actual rotation
        if(k==0) return head;
        temp->next=head;  //  make circular ll
        Node* newTail=head;
        for(int i=1;i<k;i++) newTail=newTail->next;
        Node* newHead=newTail->next;
        newTail->next=nullptr; // TO REMOVE CIRCULAR LL
        return newHead; 
    }
};

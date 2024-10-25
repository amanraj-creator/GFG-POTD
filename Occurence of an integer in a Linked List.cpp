class Solution {
  public:
    int count(struct Node* head, int key) {
        int cnt=0;
        Node *temp=head;
        while(temp!=NULL){
            if(temp->data==key) cnt++;
            temp=temp->next;
        }
        return cnt;
    }
};

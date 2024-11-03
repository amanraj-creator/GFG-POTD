class Solution {
  public:
    bool isLengthEven(struct Node **head) {
      Node *temp=*head;
      int cnt=0;
      while(temp!=NULL){
          cnt++;
          temp=temp->next;
      }
      return cnt%2==0;
    }
};

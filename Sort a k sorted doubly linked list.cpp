class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
      priority_queue<int,vector<int>,greater<int>>pq;
       DLLNode *temp1=head;
       DLLNode *temp2=head;
       while(temp1){
           pq.push(temp1->data);
           if(pq.size()==k+1){
               temp2->data=pq.top();
               temp2=temp2->next;
               pq.pop();
           }
           temp1=temp1->next;
       }
       while(!pq.empty()){
           temp2->data=pq.top();
           temp2=temp2->next;
           pq.pop();
       }
       return head;
    }
};

int sumOfLastN_Nodes(struct Node* head, int n) {
       if(head==NULL || n<=0){
           return 0;               //Base Case
       }
        int sum=0,cnt=0;
        Node* curr=head;
   // counting total nodes
        while(curr){
            sum+=curr->data;
            curr=curr->next;
            cnt++;
        }
        int skip=cnt-n; // nodes we need to skip from the beginning
        curr=head;
        while(skip--){
            sum-=curr->data;
            curr=curr->next;
        }
        return sum; 
    }
};

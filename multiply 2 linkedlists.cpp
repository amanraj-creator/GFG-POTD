class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
      Node* t1=first;  // t1 points to head of first LL
      Node* t2=second; // t2 points to head of second LL
      
      long long num1=0,num2=0;
      long long mod=1000000007;
      
      while(t1!=NULL){
          num1=(num1*10+(t1->data))%mod; //to get number from 1st LL
          t1=t1->next;
      }
        while(t2!=NULL){
          num2=(num2*10+(t2->data))%mod; //to get number from 2nd LL
          t2=t2->next;
      }
      long long ans=(num1*num2)%mod;
      return ans%mod;
    }
};

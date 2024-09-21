class Solution {
  public:
    Node *copyList(Node *head) {
      if(head==NULL) return NULL;  //BASE CASE
     // STEP 1- INSERTING NEW NODES IN BETWEEN  
       Node* cur=head;
       while(cur!=NULL){
           Node* temp=cur->next;
           cur->next=new Node(cur->data);
           cur->next->next=temp;
           cur=temp;
       }
        cur=head;
     // STEP 2- Assigning the random pointers for the cloned nodes
      while(cur!=NULL){
      if(cur->next!=NULL){
      cur->next->random=(cur->random!=NULL)?cur->random->next:NULL;
     }
       cur=cur->next->next;
    }
   //Step 3: Restore the original list and extract the copied list   
      Node* orig=head; Node*copy=head->next;
       Node*temp=copy;
       while(orig!=NULL){
      orig->next=orig->next->next;
     copy->next=(copy->next!=NULL)?copy->next->next:copy->next;
        orig=orig->next;
        copy=copy->next;
      }
      return temp;
    }
};

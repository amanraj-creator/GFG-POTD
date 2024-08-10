class Solution {
  public:
    
    Node* rotate(Node* head, int k) {
      Node* temp = head;
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        while(temp != NULL && k != 0)
        {
            temp->next = head;
            head = head->next;
            temp = temp->next;
            k--;
        }
        temp->next = NULL;
        return head; 
    }
};

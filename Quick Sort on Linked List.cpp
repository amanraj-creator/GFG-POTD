#include<algorithm>
class Solution {
  public:
    struct Node* quickSort(struct Node* head) {
     vector<int>arr;
     Node* temp=head;
     while(temp){
         arr.push_back(temp->data);
         temp=temp->next;
     }
     sort(arr.begin(),arr.end());
     temp=head;
     for(int i=0;i<arr.size();i++){
         temp->data=arr[i];
         temp=temp->next;
     }
     return head;
    }
};

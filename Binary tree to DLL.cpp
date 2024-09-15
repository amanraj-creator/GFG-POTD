class Solution {
  public:
    Node* head = NULL;
    Node* prev = NULL;
    Node* bToDLL(Node* root) {
        if(root==NULL) 
        return root;
        bToDLL(root->left);
        if(prev==NULL) {
            prev = root;
            head = root;
        }
        else {
            root->left = prev;
            prev->right = root;
            prev = root;
        }
        bToDLL(root->right);
        return head;
    }
};

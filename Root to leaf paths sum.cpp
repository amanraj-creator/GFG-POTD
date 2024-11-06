class Solution {
  public:
  void solve(Node*root,int &sum){
     if (root==NULL) return;
        if(root->left==NULL and root->right==NULL){
          sum+=root->data;    
        }
        
       if(root->left){
           root->left->data=(root->data*10)+root->left->data;
           solve(root->left,sum);
       }
           if(root->right){
           root->right->data=(root->data*10)+root->right->data;
           solve(root->right,sum);
       }
  }
       
      int treePathsSum(Node *root) {
      int sum=0;
      solve(root,sum);
      return sum;
    }
};

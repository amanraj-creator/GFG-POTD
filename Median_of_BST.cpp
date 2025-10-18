class Solution {
  public:
      void inorder(Node*root,vector<int>&ans){
          if (root==NULL) return;
          inorder(root->left,ans);
          ans.push_back(root->data);
          inorder(root->right,ans);
      }
    int findMedian(Node* root) {
        vector<int>ans;
        inorder(root,ans);
        int k=ans.size();
        int med=0;
        if(k%2==0){
            med=ans[(k/2)-1];
        }  
        else med= ans[((k+1)/2)-1];
        return med;
    }
};

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
   void solve(Node* node, vector<int>&ans){
        if(!node) return;
        solve(node->left, ans);
        ans.push_back(node->data);
        solve(node->right, ans);
    }
    
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>ans;
        solve(root, ans);
        return ans;
    }
};

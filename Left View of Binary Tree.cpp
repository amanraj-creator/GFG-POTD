vector<int> leftView(Node *root)
{
    vector<int>ans;
    queue<Node*>q;
    q.push(root);
    if(root==NULL)
    return ans;
    while(!q.empty()) { 
     int n=q.size();
      for(int i=0;i<n;i++)
        {
          Node*temp=q.front();
          q.pop();
          // For each level, only add the leftmost node to the ans
          if(i==0)
          ans.push_back(temp->data);
          if(temp->left)
          q.push(temp->left);
          if(temp->right)
          q.push(temp->right);
        }
    }
   return ans;
}

class Solution {
  public:
    unordered_map<int,vector<int>> adj;
    void rec( Node* root ){
        if ( root->left ){
            adj[root->data].push_back(root->left->data);
            adj[root->left->data].push_back(root->data);
            rec(root->left);
        }
        if ( root->right ){
            adj[root->data].push_back(root->right->data);
            adj[root->right->data].push_back(root->data);
            rec(root->right);
        }
    }
    int minTime(Node* root, int target){
        rec(root); bool vis[100001]; memset(vis,false,sizeof(vis));
        queue<int> q; q.push(target); vis[target] = true; int res = -1;
        while ( !q.empty() ){
            int k = q.size();
            while ( k-- ){
                int p = q.front(); q.pop();
                for ( auto i : adj[p] ){
                    if ( !vis[i] ){
                        q.push(i);
                        vis[i] = true;
                    }
                }
            } res++;
        } return res;
    }
};

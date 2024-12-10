class Solution {
  public:
    int minRemoval(vector<vector<int>> &it) {
        int removeCount=0;
        sort(it.begin(),it.end());
        int prev=it[0][1];
        for(int i=1;i<it.size();i++){
            if(it[i][0]<prev){
                removeCount++;
                prev=min(prev,it[i][1]);
            }
            else{
                prev=it[i][1];
            }
        }
        return removeCount;
    }
};

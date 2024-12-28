class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        vector<vector<int>>ans;
         int n=arr.size();
         for(int i=0;i<n-2;i++){
             for(int j=i+1;j<n-1;j++){
                 for(int k=j+1;k<n;k++){
                     if(arr[i]+arr[j]+arr[k]==0)
                     ans.push_back({i,j,k});
                 }
             }
         } 
         return ans;
    }
};

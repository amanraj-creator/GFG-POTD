class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        int count=0,n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            count+=mp[arr[i]-k];
            count+=mp[arr[i]+k];
            mp[arr[i]]++;
        }
        return count;
    }
};

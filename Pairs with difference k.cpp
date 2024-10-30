class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
       unordered_map<int,int>mp;
       int ans=0;
       for(int i=0;i<arr.size();i++){
           mp[arr[i]]++;
       }
       for(int i=0;i<arr.size();i++){
           if(mp.find(arr[i]+k)!=mp.end())
           ans+=mp[arr[i]+k];
       }
       return ans;
    }
};

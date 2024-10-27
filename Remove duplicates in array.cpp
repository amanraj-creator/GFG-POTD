class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
       int n=arr.size();
       vector<int>ans;
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
           if(mp.find(arr[i])==mp.end()){
               ans.push_back(arr[i]);
               mp[arr[i]]++;
           }
       }
       return ans;
    }
};

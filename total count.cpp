class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int ans=0,n=arr.size();
        for(auto nums:arr){
        ans+=nums%k==0? nums/k : nums/k +1;
        }
        return ans;
    }
};

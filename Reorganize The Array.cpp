class Solution {
  public:
    vector<int> rearrange(const vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(mp.find(i)==mp.end()){ // element not exist
                ans.push_back(-1);
            }
            else{
                ans.push_back(i); //element exist
            }
        }
        return ans;
    }
};

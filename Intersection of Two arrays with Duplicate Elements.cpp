class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        unordered_map<int,int>mp;
        for(auto it:a){
            mp[it]++;
        }
        vector<int>ans;
        for(auto it:b){
            if(mp.find(it)!=mp.end()){
                ans.push_back(it);
                mp.erase(it); // TO AVOID DUPLICATES
            }
        }
        return ans;
    }
};

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int pairs=0;
        unordered_map<int,int>mp;
        for(auto i:arr){
          if(mp.find(target-i)!=mp.end()) pairs+=mp[target-i];
           mp[i]++; 
        }
        return pairs;
    }
};

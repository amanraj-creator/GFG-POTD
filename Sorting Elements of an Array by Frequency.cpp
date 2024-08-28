class Solution {
  public:
    static bool cmp( pair<int,int> &a, pair<int,int> &b ) 
    {
     if(a.first==b.first)
        {
            return a.second>b.second;
        }
        else
        {
            return a.first<b.first;
        }
    }
    vector<int> sortByFreq(vector<int>& arr) 
    {
       unordered_map<int,int> mp;
        for(auto i:arr)
          mp[i]++;
          
        vector<pair<int,int>> v;
        for(auto i:arr)
          v.push_back({mp[i],i});
          
        sort(v.rbegin(),v.rend(),cmp); 
        
          vector<int> ans;
            for(auto i:v){
            ans.push_back(i.second);
        }
        return ans;
    }
};

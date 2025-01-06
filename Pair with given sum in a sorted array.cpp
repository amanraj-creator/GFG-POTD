class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
// method 1: O(n) Time and space complexity
        int n = arr.size();
        unordered_map<int,int>mp;
        int cnt = 0;
        for(int i=0;i<n;i++){
            int t = target - arr[i];
            if(mp.find(t)!=mp.end()) cnt+=mp[t];
            mp[arr[i]]++;
        }
        return cnt;
    }
};
 
 

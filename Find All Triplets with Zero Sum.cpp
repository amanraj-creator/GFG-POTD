class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
     int n = arr.size();
        vector<vector<int>> ans;
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    int sum = arr[i] + arr[j] + arr[k];
                    if(sum == 0) {
                        ans.push_back({i, j, k});
                    }
                }
            }
        }
        return ans;   
    }
};

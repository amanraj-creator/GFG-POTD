class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
      vector<int>ans;
        for(int i = 0; i < arr1.size(); i++) {
            ans.push_back(arr1[i]);
        }
        for(int i = 0; i < arr2.size(); i++) {
            ans.push_back(arr2[i]);
        }
        sort(ans.begin(),ans.end());
        
        return ans[k-1];
    }
};

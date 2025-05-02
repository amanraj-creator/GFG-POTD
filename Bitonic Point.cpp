class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        return(arr[n-1]);
    }
};

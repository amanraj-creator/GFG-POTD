class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        int n=arr.size();
        if(n<2) return -1; // base case
        
        int res=INT_MIN;
        for(int i=0;i<n-1;i++){
            int sum=arr[i]+arr[i+1];
            res=max(res,sum);
        }
        return res;
    }
};

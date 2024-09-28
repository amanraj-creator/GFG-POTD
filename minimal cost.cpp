class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
      int n=arr.size();
      vector<int>dp(n,1e9); //dp array to store the min cost
      dp[0]=0; // starting position
      
      for(int i=0;i<n;i++){
          for(int j=1; j<=k and i+j<n; j++){
            dp[i+j]=min(dp[i+j],dp[i]+abs(arr[i]-arr[i+j]));
          }
      }
      return dp[n-1];
    }
};

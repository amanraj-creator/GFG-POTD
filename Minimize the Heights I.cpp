class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
      int n=arr.size();
      if(n==1)return 0; // if there's only one tower
      //sortung the array
      sort(arr.begin(),arr.end());
// Initialize the result as the difference between the max and min height in the sorted array.
      int res=arr[n-1]-arr[0];
 // The lowest possible height and highest possible height after adjusting with k  
      int low=arr[0]+k;
      int high=arr[n-1]-k;
      // traversing array
      for(int i=0;i<n-1;i++){
          int mini=min(low,arr[i+1]-k);
          int maxi=max(high,arr[i]+k);
      // Update the result with the minimum possible difference
            res = min(res, maxi - mini);
      }
      return res;
    }
};

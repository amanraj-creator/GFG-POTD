class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        if(n<k) return 0; // Base Case
        
        int sum=0;
        int maxi=0;
        
        //counting of first k elements
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        maxi=sum;
        //sliding window
        for(int i=k;i<n;i++){
            sum+=arr[i]-arr[i-k]; // remove old element and add new 
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};

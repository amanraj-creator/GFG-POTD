class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        int n=arr.size();
       sort(arr.begin(),arr.end());
       int i=0,j=n-1;
       
       long long sum=0;
       while(i<j){
           sum+=(arr[j]-arr[i]) + (arr[j]-arr[i+1]);
           i++,j--;
       }
       sum+=arr[n/2]-arr[0];
       return sum;
    }
};

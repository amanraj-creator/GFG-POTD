class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        int n=arr.size();
       sort(arr.begin(),arr.end());
       int i=0,j=n-1;
       
       long long sum=0;
       while(i<j){
           sum+=abs(arr[i]-arr[j]) + abs(arr[i+1]-arr[j]);
           i++,j--;
       }
       sum+=abs(arr[i]-arr[0]);
       return sum;
    }
};

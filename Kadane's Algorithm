class Solution {
  public:
    long long maxSubarraySum(vector<int> &arr) {
       int n=arr.size();
       
       int currSum=0;
       int maxSum=arr[0];
       
       for(int i=0;i<n;i++)
       {
          currSum+=arr[i];
          if(currSum>maxSum)
          {
              maxSum=currSum;
          }
           if(currSum<0)
           {
               currSum=0;
          }  
        }
          return maxSum;
       }
    
};

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
       int n=arr.size();
       int sum=0;
       int currentsum=0;
       for(int i=0;i<n;i++)
       {
         sum+=arr[i];
       }
      if(sum%2!=0) //As odd sum cannot be divided into 2 equal sums
       {
       return false;
       }
       for(int i=0;i<n;i++)
       {
          currentsum+=arr[i];
          if(currentsum==sum/2)
          {
              return true;
          }
       }
       return false;
    }
};

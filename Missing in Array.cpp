class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

       int totalSum=(n*(n+1))/2;
       int arrSum=0;
       for(int i=0;i<n-1;i++)
       {
           arrSum+=arr[i];
       }
       return (totalSum-arrSum);
    }
};

// UPDATE
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long int sum=0;
        long long int size=arr.size()+1; // 1 ELEMENT IS LESS THAT'S WHY
        long long int org_sum=(size*(size+1))/2;
        for(auto X:arr){
            sum+=X;
        }
        return (org_sum-sum);
    }
};


class Solution {
  public:
    int Maximize(vector<int> arr) {
      sort(arr.begin(),arr.end());
        long sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=(long)arr[i]*i;
        }
        long ans=sum%1000000007;
        return ans;
    }
};

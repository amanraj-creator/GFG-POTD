class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
     unordered_map<int,int>mp;
     int n=arr.size();
     int sum=0,count=0;
     for(int x:arr){
         sum+=x;
         if(sum==tar) count++;
         if(mp.find(sum-tar)!= mp.end()){
             count+=mp[sum-tar];
         }
         mp[sum]++;
      }
      return count;
    }
};

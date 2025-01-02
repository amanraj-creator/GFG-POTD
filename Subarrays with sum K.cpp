class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
         int n = arr.size();
        
        unordered_map<int, int> prefixSum;
        int count = 0;
        int sum = 0;
        
        for(int i = 0;i < n;i++) {
            sum += arr[i];
            if(sum == k) count++;
            
            if(prefixSum.find(sum-k) != prefixSum.end()){
                count += prefixSum[sum-k]; // if sum>k then for sum-x=k
                                              // x=sum-k
            }
            prefixSum[sum]++;
        }
        
        return count;
    }
};

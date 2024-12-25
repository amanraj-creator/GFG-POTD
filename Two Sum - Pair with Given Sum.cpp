class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
    //    method 1 : Two pointer approach
    //   int n=arr.size();
    //   sort(arr.begin(),arr.end());
    //   int left=0,right=n-1;
    //   while(left<right){
    //     int sum=arr[left]+arr[right];
    //     if(sum==target) return true;
    //     else if(sum<target) left++;
    //     else right--;
    //   }
    //   return false;
      
      // method 2
      
      set<int>st;
      for(int i=0;i<arr.size();i++){
          if(st.find(target-arr[i])!=st.end()) return true;
          st.insert(arr[i]);
      }
      return false;
    }
};

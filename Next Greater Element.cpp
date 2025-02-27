
 class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
           while(!st.empty() and st.top()<=arr[i]) st.pop();
           ans[i]=st.empty() ? -1 : st.top();
           st.push(arr[i]);
        }
        return ans;
    }
 };


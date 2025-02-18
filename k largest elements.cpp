class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // int n=arr.size();
        // vector<int>ans;
        // sort(arr.begin(),arr.end());
        // for(int i=n-1;i>=n-k;i--){ //n - 1 represents the last index of the sorted array.
        //                           //n - k represents the index where the k largest elements start
        //     ans.push_back(arr[i]); //The loop iterates backward, adding elements to the ans vector
        // }
        // return ans;
        
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

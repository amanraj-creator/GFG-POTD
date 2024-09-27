class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
      int n=arr.size();
      vector<int>res;//store the result of max of each subarray
      deque<int>dq; //store indices of elements in arr
      
      //process the first window
      for(int i=0;i<k;i++){
         // Remove elements smaller than the current one
        while(!dq.empty() and arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        //adding current element index to deque
        dq.push_back(i);
      }
      // Process the rest of the elements from index k to n-1
      for(int i=k;i<n;i++){
          //push the maximum for the current window to result
          res.push_back(arr[dq.front()]);
          //remove elements that are out of current window
          while(!dq.empty() and dq.front()<=i-k ){
              dq.pop_front();
          }
         // Remove elements smaller than the current one
        while(!dq.empty() and arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
       //adding current element index to deque
        dq.push_back(i);
       }
      //adding the maximum for the last window
      res.push_back(arr[dq.front()]);
      return res;
    }
};

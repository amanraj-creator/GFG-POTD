class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
          // make a min heap
        priority_queue<int,vector<int>,greater<int>>pq;
        int j=0;// This will track the sorted position in arr.
        
    //Insert all elements in heap
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
    // If heap size exceeds k, extract the minimum element    
            if(pq.size()>k){
                arr[j++]=pq.top();
                pq.pop();
            }
        }
// Pop the remaining elements from the heap 
//and place them in the result
        while(!pq.empty()){
            arr[j++]=pq.top();
            pq.pop();
        }
    }
};

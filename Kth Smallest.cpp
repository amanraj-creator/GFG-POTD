class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue<int>maxh;
        for(int i=0;i<k;i++)
        {
            maxh.push(arr[i]);
        }
        for(int i=k;i<arr.size();i++)
        {
            if(arr[i]<maxh.top())
            {
                maxh.pop();
                maxh.push(arr[i]);
            }
        }
        return maxh.top();
    }
};

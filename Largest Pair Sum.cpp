/*class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int n=arr.size();
        int maxSum=0;              //BRUTE FORCE APPROACH
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
             maxSum=arr[i-1]+arr[i];
        }
        return maxSum;
    }
};
*/

/*class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        priority_queue<int>maxHeap;
        for(int i=0;i<arr.size();i++){  //PRIORITY QUEUE APPROACH
            maxHeap.push(arr[i]);
        }
        int a=maxHeap.top();
        maxHeap.pop();
        int b=maxHeap.top();
        maxHeap.pop();
        return a+b;
    }
};
*/
class Solution {
  public:
int pairsum(vector<int> &arr) {
        int n=arr.size();
        int l1=INT_MIN;
        int l2=INT_MIN;               //OPTIMIZED APPROACH
        
        for(int i=0;i<n;i++){
            if(arr[i]>l1){
                l2=l1;
                l1=arr[i];
            }else if(arr[i]>l2){
                l2=arr[i];
            }
        }
        return l1+l2;
    }
};


class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        long long smallest=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>smallest){
                break;
            }
            else{
                smallest+=arr[i];
            }
        }
        return smallest;
    }
};

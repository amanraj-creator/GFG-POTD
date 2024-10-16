class Solution {
  public:
bool checkSorted(vector<int> &arr) {
        int k=2;
        for(int i=0 ; i<arr.size() ; i++){
        if(arr[i] != i+1){ //if the number is not at corect place
               k--;
               swap(arr[i] , arr[arr[i] -1]);
               if(k==-1) return false;
                
            }
        }
        
        if(k!=0 && k!=2) return false;
        if(arr[0] != 1) return false;
        return true;
    }
};

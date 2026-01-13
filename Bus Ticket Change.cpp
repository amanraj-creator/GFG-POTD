class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==5){
                freq[arr[i]]++;
            }
            else if(arr[i]==10 and freq[5]>0){
                freq[5]-=1;
                freq[arr[i]]++;
            }
            else if(arr[i]==20 and freq[10]>0 and freq[5]>0){
                freq[arr[i]]++;
                freq[5]-=1;
                freq[10]-=1;
            }
            else if(arr[i]==20 and freq[5]>=3){
                freq[arr[i]]++;
                freq[5]-=3;
            }
            else return false;
        }
        return true;
    }
};

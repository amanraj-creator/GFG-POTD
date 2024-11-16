class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0) arr[j++]=arr[i];
        }
            while(j<arr.size()) arr[j++]=0;
    }
};

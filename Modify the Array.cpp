class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        vector<int>ans;
      for(int i=0;i<arr.size()-1;i++){
          if(arr[i]==arr[i+1] and arr[i]!=NULL){
              arr[i]*=2;
              arr[i+1]=0;
          }
      }
      for(int i=0;i<arr.size();i++){
          if(arr[i]!=0){
              ans.push_back(arr[i]);
          }
      }
      for(int i=0;i<arr.size();i++){
          if(arr[i]==0){
              ans.push_back(arr[i]);
          }
      }
      return ans;
    }
};

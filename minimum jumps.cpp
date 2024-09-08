class Solution {
  public:
    int minJumps(vector<int>& arr) {
      int n=arr.size();
      int maxi=0;
      int pos=0;
      int jump=0;
      
      for(int i=0;i<n-1;i++){
          maxi=max(maxi,i+arr[i]);
          if(i==pos){
              pos=maxi;
              jump++;
          }
      }
         if(pos>=n-1){
          return jump;
      }
      return -1;
    }
};

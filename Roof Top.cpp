class Solution {
  public:
    int maxStep(vector<int>& arr) {
        int n=arr.size(),count=0,res=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]) count++;
            else count=0;
            res=max(res,count);
        }
       return res; 
    }
};

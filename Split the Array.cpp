class Solution {
  public:
    int countgroup(vector<int>& arr) {
       int xr=0,n=arr.size();
       for(auto i:arr) xr^=i;
       return xr==0 ? (1<<(n-1))-1 : 0;
    }
};

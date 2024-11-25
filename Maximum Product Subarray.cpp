class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int preProd=1,postProd=1;
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(preProd==0) preProd=1;
            if(postProd==0) postProd=1;
            
            preProd*=arr[i];
            postProd*=arr[n-i-1];
            
            maxi=max(maxi,max(preProd,postProd));
        }
        return maxi;
    }
};

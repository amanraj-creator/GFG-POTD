class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int m=a.size();
        int n=b.size();
        
        int left=m-1; // Traversing from right to left
        int right=0; //  Traversing from left to right
         
        while(left>=0 and right<n){
            if(a[left]>b[right]){
               swap(a[left--],b[right++]);
            }
            else{
              break;  
            } 
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    }
};

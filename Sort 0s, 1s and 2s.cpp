class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n=arr.size();
       // BRUTE FORCE APPROACH sort(arr.begin(),arr.end());
       int zeros=0,ones=0,twos=0;
       for(int i=0;i<n;i++)
       {
              if(arr[i]==0){
               zeros++;
              }
              else if(arr[i]==1){
               ones++;
              }
       }
       for(int i=0;i<n;i++)
       {
             if(zeros>0){
             arr[i]=0;
             zeros--;
            }
             else if(ones>0){
             arr[i]=1;
             ones--;
           }
           else{
           arr[i]=2;
           }
      }
    
    }
};

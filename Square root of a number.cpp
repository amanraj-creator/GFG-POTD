class Solution {
  public:
  long long int floorSqrt(long long int n) {

     long sqrt=0;
     for(int i=0;i*i<=n;i++)
     {
       sqrt=i; 
     }
      return sqrt; 
      
     // return sqrt(n);
    }
};

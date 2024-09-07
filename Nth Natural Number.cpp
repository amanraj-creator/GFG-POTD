class Solution {
  public:
    long long findNth(long long n) {
        long long ans=0;
        long long pl=1;
        while(n>0)
        {
            ans+=pl*(n%9);
            n/=9;
            pl*=10;
            
        }
        return ans;
    }
};

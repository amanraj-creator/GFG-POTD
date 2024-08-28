class Solution {
  public:
  
    int findMaxDiff(vector<int> &arr) {
        int n=arr.size();
       stack<int>s1;   //for left smaller array
       vector<int>v1(n);
       s1.push(0);
      for(int i=0;i<n;i++)
      {
          while(!s1.empty() && s1.top()>=arr[i])
          {
              s1.pop();
          }
          v1[i]=s1.top();
          s1.push(arr[i]);
      }
        stack<int>s2;      //for right smaller array
        vector<int>v2(n);
        s2.push(0);
     for(int i=n-1;i>=0;i--)
      {
          while(!s2.empty() && s2.top()>=arr[i])
          {
              s2.pop();
          }
          v2[i]=s2.top();
          s2.push(arr[i]);
      }
      
      int res=INT_MIN;
      for(int i=0;i<n;i++)
      {
          res=max(res,abs(v1[i]-v2[i]));
      }
      return res;
    }
};

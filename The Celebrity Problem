class Solution {
  public:
    
    int celebrity(vector<vector<int> >& mat) {
      int n=mat.size();
      int a=0;
      int b=n-1;
      
      while(a<b)

      {
         if(mat[a][b]==1)
         a++;
         else 
         b--;
      }
      for(int i=0;i<n;i++)
      {
          if((i!=a) and (mat[a][i] || !mat[i][a]))
          return -1;
      }
      return a;
    }
};

class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        int maxlen=0;
        int m=str1.length(),n=str2.length();
        for(int i=0;i<m;i++)
        {
            for(int j=i;j<m;j++)
            {
                string substr= str1.substr(i, j - i + 1);
                if(str2.find(substr)<=n){
                    maxlen=max(maxlen,j-i+1);
                }
                
            }
        }
        return maxlen;
    }
};

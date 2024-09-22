class Solution {
  public:
    int lps(string str) {
        vector<int>lps(str.length(),0);
           int pre=0,suf=1;
        while(suf<str.length()){
           if(str[pre]==str[suf]){
               lps[suf]=pre+1;               //MATCH
               suf++;pre++;
           }
           else{
               if(pre==0){
                   lps[suf]=0;
                   suf++;                 // NOT MATCHED
                }
                else{
                    pre=lps[pre-1];
                }
             }
        }
        return lps[str.length()-1];
    }
};

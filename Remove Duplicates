class Solution {
  public:

    string removeDups(string str)
    {
       string result="";
       int freq[26]={0};
       for(int i=0;i<str.length();i++)
       {
           if(freq[str[i]-'a']==false)
           {
            result+=str[i];
            freq[str[i]-'a']=true;
           }
       }
       
       return result;
    }
};

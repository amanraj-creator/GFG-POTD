class Solution {
  public:
    string reverseWords(string str) {
        stack<string>s;
        string ans="";
        string temp;
        
        for(int i=0;i<str.size();i++){
            if(str[i]!='.'){
            temp+=str[i];
            }
            else {
            s.push(temp); 
            temp="";
            }
        }
        s.push(temp);
        while(s.size()>0){
           if(s.size()>1){
               ans=ans+s.top()+".";
               s.pop();
           }
           else{
               ans+=s.top();
               s.pop();
           }
        }
        return ans;
    }
};

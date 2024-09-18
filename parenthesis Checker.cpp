class Solution
{
    public:
    bool ispar(string x)
    {
        stack<char> par;
        for(auto it : x)
      {
        if(it=='{' || it=='[' || it=='(') par.push(it);
            
        else{
               if(par.empty()) return false;
               if(it=='}' && par.top()=='{') par.pop();
               else if(it==']' && par.top()=='[') par.pop();
               else if(it==')' && par.top()=='(') par.pop();
               else return false;
            }
      }
        if(!par.empty()) return false;
         return true;
    } 
};

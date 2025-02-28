class Solution {
  public:
    int evaluate(vector<string>& arr) {
        stack<int>st;
        for(string & i: arr){
          if(i=="+"|| i=="-"|| i=="*"|| i=="/"){
              int b=st.top(); st.pop();   // Pop the top two operands
              int a=st.top(); st.pop();
              int result;
              if(i=="+") result=a+b;
              else if(i=="-") result=a-b;
              else if(i=="*") result=a*b;
              else if(i=="/") result=a/b;
              st.push(result);
          }
          else st.push(stoi(i)); // Push the operand onto the stack
        }
        return st.top();  // The result will be the only element in the stack
    }
};


class Solution {
  public:
    int maxLength(string str) {
        int n=str.length();
        int left=0,right=0,maxlen=0;
        
      // left-right traversal
      for(int i=0;i<n;i++){
          if(str[i]=='('){
          left++;
      }
      else{
          right++;
       }
      if(left==right){
          maxlen=max(maxlen,2*left);
       }
      else if(right>left){
          left=right=0;
      }
    }
    
    // right-left traversal
    left=right=0;
    for(int i=n-1;i>=0;i--){
        if(str[i]=='('){
            left++;
        }
        else{
           right++;
        }
        if(left==right){
            maxlen=max(maxlen,2*right);
        }
        else if(left>right){
            left=right=0;
        }
    }
    return maxlen;
    }
};

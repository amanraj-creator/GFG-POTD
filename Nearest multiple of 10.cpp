class Solution {
  public:
    string roundToNearest(string str) {
     int n=str.length();
     //check the last digit
     if(str[n-1]<='5'){
         //just set the last digit to '0'
         str[n-1]='0';
         return str;
     }
     str[n-1]='0';
     int i=n-2;
     while(i>=0 and str[i]=='9'){
// if the digit is '9' set it to '0' and move to previous digit
      str[i]='0';
      i--;
     }
 // If we exhausted the string (all digits were '9') then add '1'
  if(i<0){
      return '1'+ str;
  }
    // Increment the current digit (since it's not '9') 
      else{
          str[i]++;
      } 
      return str;
    }
};

class Solution {
  public:
    int myAtoi(char *s) {
    int i=0; int sign=1;
       long long ans=0;
       while(s[i]== ' ') i++;
       if(s[i]=='-'){
           sign=-1;
           i++;
       }
         while(s[i] >= '0' && s[i] <= '9'){
            ans = ans * 10 + (s[i] - '0');
            i++;
        }
        ans *= sign;
        if(ans >= INT_MAX) return INT_MAX;
        if(ans <= INT_MIN) return INT_MIN;
        return ans;
    }
};

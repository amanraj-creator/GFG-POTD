class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        int cnt=1; //because a string is already given
        string temp=s1;
        
        while(temp.size()<s2.size()){
            temp+=s1;
            cnt++;
        }
       if(temp.find(s2)!=-1) return cnt;
       temp+=s1;
       cnt++;
       return (temp.find(s2)!=-1)?cnt:-1;
    }
};

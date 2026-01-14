class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
    int n=arr.size();
        vector<int>p,t;
        for(int i=0;i<n;i++){
            if(arr[i]=='P'){
                p.push_back(i);
            }
            else t.push_back(i);
        }
        int cnt=0;
        int i=0,j=0;
        while(i<p.size() && j<t.size()){
            if(abs(p[i]-t[j])<=k){
                cnt++;
                i++;
                j++;
            }
            else if(p[i]<t[j]){
                i++;
            }
            else j++;
        }
        return cnt;
    }
};

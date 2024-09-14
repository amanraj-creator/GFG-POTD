class Solution {
  public:
    void rearrange(vector<int> &arr) {
       vector<int>pos,neg,res;
       for(int i=0;i<arr.size();i++){
           if(arr[i]>=0)
           pos.push_back(arr[i]);
           else
           neg.push_back(arr[i]);
       }
       int i=0,j=0;
       while(i<pos.size() && j<neg.size()){
           res.push_back(pos[i++]);
           res.push_back(neg[j++]);
       }
       while(i<pos.size()){
           res.push_back(pos[i++]);
       }
         while(j<neg.size()){
         res.push_back(neg[j++]);
       }
       arr=res;
    }
};

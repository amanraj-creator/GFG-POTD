class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
       vector<int>ans;
       for(int i=0;i<arr1.size();i++)
       {
          ans.push_back(arr1[i]);
       }
       for(int i=0;i<arr2.size();i++)
       {
           ans.push_back(arr2[i]);
       }
       sort(ans.begin(),ans.end());
         
       int l=ans.size();
       if(l%2==0)
       {
            return(ans[(l/2)-1]+ans[l/2]);
       }
        else
        return ans[l/2];
    }
};

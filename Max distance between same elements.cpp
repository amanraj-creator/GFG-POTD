class Solution {
  public:
    int maxDistance(vector<int> &arr) {
       unordered_map<int,int>mp;
        int maxi=INT_MIN;
       for(int i=0;i<arr.size();i++){
           if(mp.find(arr[i])!=mp.end()){ //element exist
               maxi=max(maxi,i-mp[arr[i]]);
           }
           else{  //element not exist
              mp[arr[i]]=i; 
           }
       }
       return maxi;
    }
};

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
       int n=arr.size();
       map<int,int>mp;
       vector<int>v;
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
           
       }
       for(auto it:mp){
           if(it.second>n/3){
               v.push_back(it.first);
           }
       }
       return v;
    }
};

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // using SET
    //   unordered_set<int>st;
    //   for(auto i:a) st.insert(i);
    //   for(auto i:b) st.insert(i);
    //   return st.size();
     
      // using MAP
     unordered_map<int,int>mp;
      for(auto it:a){
          mp[it]++; 
      }
      for(auto it:b){
          mp[it]++;
      }
     return mp.size();   
    }
};

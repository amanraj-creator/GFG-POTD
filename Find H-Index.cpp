class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
      int n=citations.size();
      sort(citations.begin(),citations.end());
      for(int i=0;i<n;i++){
          int h=n-i;
          if(citations[i]>=h) return h;
      }
      return 0;
    }
};

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
       int maxProfit=0;
       int minPrice=INT_MAX;
       for(auto ele : prices){
           minPrice=min(minPrice,ele);
           maxProfit=max(maxProfit,ele-minPrice);
       }
       return maxProfit;
    }
};

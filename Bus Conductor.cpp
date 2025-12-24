class Solution {
  public:
    int findMoves(vector<int>& chairs, vector<int>& passengers) {
        // code here
        sort(chairs.begin(),chairs.end());
        sort(passengers.begin(),passengers.end());
        int count=0;
        for(int i=0;i<passengers.size();i++){
        count+=abs(passengers[i]-chairs[i]);
    }
    return count;
    }
};

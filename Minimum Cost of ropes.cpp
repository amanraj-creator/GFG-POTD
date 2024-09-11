class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
     long long cost=0;
   priority_queue<long long,vector<long long>,greater<long long>>minH;
       for(int i=0;i<arr.size();i++)
       minH.push(arr[i]);
       
       while(minH.size()>1){
           long long first=minH.top();
           minH.pop();
           long long second=minH.top();
           minH.pop();
           minH.push(first+second);
           cost+=(first+second);
       }
       return cost;
    }
};

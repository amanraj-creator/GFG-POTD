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

// modified
class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int res=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int & a:arr){
            pq.push(a);
        }
        while(pq.size()>1){
            int f=pq.top();
            pq.pop();
            int s=pq.top();
            pq.pop();
            res+=(f+s);
            pq.push(f+s);
        }
        return res;
    }
};

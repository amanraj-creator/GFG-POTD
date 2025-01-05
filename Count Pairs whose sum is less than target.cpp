class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // sort(arr.begin(),arr.end());
        // int cnt=0;
        // for(int i=0;i<arr.size()-1;i++){
        //     if(arr[i]>=target) break;
        //     for(int j=i+1;j<arr.size();j++){
        //         if(arr[i]+arr[j]<target) {
        //             cnt++;
        //       }
        //      else{
        //       break; 
        //     } 
        //   }
        // }
        // return cnt;
        
        sort(arr.begin(),arr.end()); 
        int count=0,s=0,e=arr.size()-1; 
        while(s<e){
           if(arr[s]+arr[e]>=target) e--;
           else{
               count+=e-s;
               s++;
           }
        }
        return count; 
     }
 };
 

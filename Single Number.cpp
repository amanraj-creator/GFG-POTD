class Solution {
  public:
    int getSingle(vector<int>& arr) {
      
       //BRUTE-FORCE APPROACH
     /* unordered_map<int,int>freq;
      for(int i=0;i<arr.size();i++){
          freq[arr[i]]++;
      }
      for(auto it:freq){
          if(it.second %2!=0){
              return it.first;
          }
      }
      */
      
     int number=0;
     for(int i=0;i<arr.size();i++){
         number^=arr[i];
     }
      return number;
    }
};

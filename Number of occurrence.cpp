class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
         int countTar=0;
         for(int i=0;i<arr.size();i++){
             if(arr[i]==target) countTar++;
         }
         return countTar;
    }
};

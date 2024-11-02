class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
      unordered_map<int,int> map;
        map[0] = -1; // best practice
        for(int i=0;i<arr.size();i++){
            //  main condition
            if(map.find(arr[i]) != map.end()){
                // duplicate value within the k distance
                if(i - map[arr[i]] <= k) return 1;
            }
            // updating the old index value with new Value
            map[arr[i]] = i; // insert value
        }
        return 0;  
    }
};

class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
// Use a map to store the difference of occurrences of x and y at each point
        unordered_map<int, int> diffMap;

        // Initialize counters for x and y
        int x_count = 0, y_count = 0, result=0;
        
// This is to handle the case which means before we start processing the array, the counts of x and y are both 0 (i.e., they are equal).
        diffMap[0] = 1; 

        for (int num : arr) {
// Update counts of x and y based on the current number in the array
            if (num == x) x_count++;
            if (num == y) y_count++;
            
// Calculate the current difference between occurrences of x and y
        int diff = x_count - y_count;

     // If this difference has been seen before, it means there are subarrays
    // where the number of occurrences of x and y are equal.        
                if(diffMap.find(diff) != diffMap.end()) {
                result += diffMap[diff];
            }
            
    // Increment the occurrence of this difference in the map
            diffMap[diff]++;
        }
// Return the total count of subarrays where the occurrences of x and y are equal
        return result;
    }
};

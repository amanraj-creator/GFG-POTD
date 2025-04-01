 class Solution {
    public:
    int maxPartitions(string &s) {
        unordered_map<char, int> ump;  // Hash map to store the last occurrence of each character in the string
        
        // Step 1: Store the last occurrence index of each character in the map
        for(int i = 0; i < s.size(); i++) {
            ump[s[i]] = i;  // Updating the last occurrence index of character s[i]
        }

        int last = -1;  // This keeps track of the farthest index we need to reach before making a partition
        int count = 0;  // Counter for the number of partitions
        
        // Step 2: Iterate through the string to determine partitions
        for(int i = 0; i < s.size(); i++) {
            last = max(last, ump[s[i]]);  // Update `last` with the farthest index of the current character
            
            // If the current index `i` reaches `last`, we have found a valid partition
            if(i == last) {
                count++;   // Increment partition count
                last = -1; // Reset last for the next partition
            }
        }
        return count; // Return the number of partitions
    }
};
 

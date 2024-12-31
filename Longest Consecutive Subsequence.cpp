class Solution {
  public:
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
     if (arr.empty()) return 0; // Base case: empty array
     sort(arr.begin(), arr.end()); // Sort the array
     int longest = 1, current = 1; // Initialize streaks
     for (int i = 1; i < arr.size(); i++) { // Start from the second element
         if (arr[i] == arr[i - 1]) continue; // Skip duplicates
         else if (arr[i] - arr[i - 1] == 1) current++; // Consecutive elements
         else {
      // Not consecutive, update longest streak
             longest = max(longest, current);
             current = 1; // Reset current streak
             }
         }
        return max(longest, current); // Return the longest streak
    }
};

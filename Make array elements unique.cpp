 class Solution {
public:
    int minIncrements(vector<int>& arr) {
        // Step 1: Sort the array so duplicates and smaller elements come together
        sort(arr.begin(), arr.end());

        int op = 0; // variable to count total increments required

        // Step 2: Traverse the array from the second element onward
        for (int i = 1; i < arr.size(); i++) {

            // Case 1: Current element is equal to or smaller than previous
            if (arr[i] <= arr[i - 1]) {

                // Find how much we need to increment
                int diff = arr[i - 1] - arr[i] + 1;

                // Add to operation count
                op += diff;

                // Update arr[i] so it becomes one greater than previous element
                arr[i] = arr[i - 1] + 1;
            }
            // If arr[i] > arr[i-1], it's already unique, do nothing
        }

        return op;
    }
};

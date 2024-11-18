class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        //if arr size < d
         d%=arr.size();
        // Reversing first d elements
        reverse(arr.begin(),arr.begin()+d);
        //Reversing the remaining elements from d to end
        reverse(arr.begin()+d,arr.end());
       // Reversing the whole array
       reverse(arr.begin(),arr.end());
    }
};

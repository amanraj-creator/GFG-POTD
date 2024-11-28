class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
      /*  int missing = 1;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for(int i=0; i<n; i++) if(missing == arr[i]) missing++;
        return missing;
        */

// 2nd method

       int n =arr.size();
       if(n==0)
       return -1;

    set<int> ans (arr.begin() , arr.end());

    for (int i = 1; i <= n+1 ; i++) {
        if (ans.find(i) == ans.end()) {
            return i; 
        }
    }

     return -1;
    }
 };
 
 

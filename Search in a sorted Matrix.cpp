class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
       int n=mat.size();
       int m=mat[0].size(); // No of columns
       int low=0, high=n*m-1;
       while(low<=high){
           int mid=low + (high-low)/2; // to avoid overloading
           int row=mid/m,col=mid%m;
           if(mat[row][col]==x) return true;
           else if(mat[row][col]>x) high=mid-1;
           else low=mid+1;
       }
        return false;
    }
};

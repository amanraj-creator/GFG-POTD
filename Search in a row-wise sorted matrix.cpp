class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
       //  int n=mat.size();
        // for(int i=0;i<n;i++){
        // if(binary_search(mat[i].begin(),mat[i].end(),x)) return true;
        // }
        // return false;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++) {
            int low=0, high=m-1;
            while(low<=high) {
                int mid=low+(high-low)/2;
                if(mat[i][mid]==x) return true;
                else if(mat[i][mid]>x) high=mid-1;
                else low=mid+1;
            }
        }
        return false;
     }
 };
 

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        int left=0, right=mat[0].size()-1; // last column
        int top=0, bottom=mat.size()-1; // last row
        vector<int>ans;
        while(left<=right && top<=bottom){
            //step1
           for(int i=left; i<=right; i++){
              ans.push_back(mat[top][i]);
           }
           top++;
            //step2
           for(int i=top;i<=bottom;i++){
               ans.push_back(mat[i][right]);
           }
           right--;
           if(top<=bottom){ //step3
               for(int i=right;i>=left;i--){
                   ans.push_back(mat[bottom][i]);
                }
               bottom--; 
            }
            if(left<=right){ //step4
              for(int i=bottom;i>=top;i--){
                  ans.push_back(mat[i][left]);
               }
               left++; 
            }
         }
          return ans;
      }
   };
   

void rotate(vector<vector<int> >& mat) {
    // Reverse -> Transpose
    int n=mat.size();
    reverse(mat.begin(),mat.end()); //reverse
    // reverse
    for(int i=0;i<n;i++){
        for( int j=i+1;j<n;j++)
        swap(mat[i][j],mat[j][i]);
    }
}

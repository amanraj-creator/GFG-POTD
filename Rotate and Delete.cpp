class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
       int k=1;
       int n=arr.size();
       while(n>1){
           arr.insert(arr.begin(),arr.back());
           arr.pop_back();
           if(k>n) arr.erase( arr.begin());
           else arr.erase( arr.end()-k);
           n=arr.size();
           k++;
       }
       return arr[0];
    }
};

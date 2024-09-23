class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n=arr.size();
        int repeat=0,miss=0;
        unordered_map<int,int>freq;
        
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(freq[i]==2){
                repeat=i;
            }
            if(freq[i]==0){
                miss=i;
            }
        }
        return {repeat,miss};
    }
};

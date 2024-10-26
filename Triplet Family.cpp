class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        int n=arr.size();
        /*
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n-1;j++){
                int num=arr[i]+arr[j];
                for(int k=j+1;k<n;k++){
                    if(num==arr[k]){
                        return true;
                    }
                }
            }
        }
        return false;
        */
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(int i=0;i<n;i++){
            int sum=0;
        for(int j=i+1;j<n;j++){
            sum=arr[i]+arr[j];
            if(mp.find(sum)!=mp.end()){
                return true;
            }
          }
        }
        return false;
    }
};

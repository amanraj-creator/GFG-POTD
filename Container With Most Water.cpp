class Solution {

  public:
    int maxWater(vector<int> &arr) {
        int left=0,right=arr.size()-1,area=0,maxWater=0;
        while(left<right){
            
            int h=min(arr[left],arr[right]);
            int w=right-left;
            area=h*w;
          
            maxWater=max(maxWater,area);
            if(arr[left]>arr[right]) right--;
            else left++;
        }
        return maxWater;
    }
};

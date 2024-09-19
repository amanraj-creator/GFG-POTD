class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int maxheight=0,face=0;
        for(auto val:height){
           if(val>maxheight){
              maxheight=val;
              face++; //update maximum height and increment face count
           }
       }
       return face;
    }
};

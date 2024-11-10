class Solution {
  public:
    int minIncrements(vector<int> arr) {
     // Sorting the array to handle the duplicates easily    
       sort(arr.begin(),arr.end());
       int minOp=0;
 // Iterating through the sorted array
       for(int i=1;i<arr.size();i++){
// If the current element is not greater than the previous one         
           if(arr[i]<=arr[i-1]){
//Incrementing the current element to be greater than the previous one 
            minOp+=(arr[i-1]-arr[i]+1);
// Updating the current element to be unique  
          arr[i]=arr[i-1]+1;
       }
    }
      return minOp; 
    }
};

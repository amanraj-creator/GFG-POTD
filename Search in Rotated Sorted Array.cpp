class Solution {
  public:
    int search(vector<int>& arr, int key) {
       int left=0;
       int right=arr.size()-1;
       
       while(left<=right){
           int mid=left+(right-left)/2;
         //check if mid element is the key
         if(arr[mid]==key) return mid;
         
         //Determine which part is sorted
         if(arr[left]<=arr[mid]){ //left part is sorted
         if(arr[left]<=key and key<arr[mid]){ //key is in left part
              right=mid-1;
          }
           else{ //key is in right part
               left=mid+1; 
           }
         }
         
         else
            {
             //Right part is sorted
             if(arr[mid]<key and key<=arr[right]){// key is in right part
                left=mid+1; 
            }
            else{ // key is in left part
                right=mid-1;
            }
         }
       }
       return -1; // key not found
     }
};

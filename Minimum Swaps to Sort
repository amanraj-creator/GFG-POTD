class Solution 
{
    public:
   
	int minSwaps(vector<int>&nums)
	{
	   vector<pair<int,int>>number;
	   for(int i=0;i<nums.size();i++)
	   {
	     number.push_back({nums[i],i}); 
	       
	   }
	   sort(number.begin(),number.end());
	   
	   int count=0;
	   
	   for(int i=0;i<nums.size();i++)
	   {
	       if(i!=number[i].second)
	
	       {
	           count++;
	           swap(number[i],number[number[i].second]);
	           i--;
	       }
	   }
	   return count;
	}
	
};

/*
we have:
     x^y > y^x
   Taking log on both sides,we get:
    log(x^y) > log(y^x)
    => ylogx > xlogy
    => y/logy > x/logx  // dividing both sides by logxlogy  
    Hence, logy/y < logx/x  // by taking reciprocal and multiply with (-1) in both sides.
    
  */

  //CODE:
  class solution
{
  public:
 long long countPairs( vector<int>&arr,vector<int>&brr )
{
  int n=arr.size(),m=brr.size();
 vector<double>a,b;
 for(auto it:arr)
{
  a.push_back( log(it)/(it*1.0));
}

 for(auto it:brr)
{
  b.push_back( log(it)/(it*1.0));
}
 sort(a.begin(),a.end());
 sort(b.begin(),b.end());

long long res=0;
for(int i=0,j=0;i<n;i++)
{
  while(j<m and b[j]<a[i])
  j++;
  res+=j;
}
return res;
}
};


 


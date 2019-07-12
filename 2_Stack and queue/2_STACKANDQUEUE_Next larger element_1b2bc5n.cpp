//https://practice.geeksforgeeks.org/problems/next-larger-element/0

//1. My approach    o(n)

	                
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int size;
	    cin>>size;
	   stack<long long int> man;
	   vector<long long int>a(size),ans(size);
	   for(long long int i=0;i<size;i++)
	   {
	       cin>>a[i];
	       
	   }
	   
	   
	   for(long long int i=size-1;i>=0;i--)
	{
	       while(!man.empty()&& a[i]>=man.top())
	       man.pop();
	   
	   ans[i]=man.empty()?-1:man.top();
	   man.push(a[i]);
	    
	    
	}
	   
	  for(long long int i=0;i<size;i++)
	   {
	      cout<<ans[i]<<" ";
	       
	   }
	    
	   
	   cout<<endl;
	    
	    
	}
	
	
	
	return 0;
}
	    
	    
	    
	    
	
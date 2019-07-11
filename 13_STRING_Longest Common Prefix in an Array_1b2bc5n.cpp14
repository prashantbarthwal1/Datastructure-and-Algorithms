//https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array/0

//1. My approach


#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
	int size;
	cin>>size;
	vector<string> a;
	for(int i=0;i<size;i++)
	{
	    string b;
	    cin>>b;
	    a.push_back(b);
	}
	
if(size==1)
{
    cout<<a[0]<<endl;
}
else
{
	
	
	int min=INT_MAX;string s="";
	for(int i=0;i<size;i++)
	{
	    int size1=(a[i]).length();
	    if(size1<min)
	    {
	        min=size1;
	       
	    }
	    
	    
	}
	
	
	
		
	bool flag=false;
	
	for(int i=0;i<min;i++)
	{
	 	
	for(int j=1;j<size;j++)
	{
	    if(a[j][i]!=a[0][i] )
	    {
	        flag=true;
	        
	        break;
	        
	    }
	  
	     
	   
	    
	    
	    
	}
	if(flag==true)
	{
	    
	    break;
	}

	s+=a[0][i];

	
	}
	int size2=s.length();
	if(size2==0)
	{
	    cout<<"-1"<<endl;
	}
	else
	{
	cout<<s<<endl;
	}
}
	
	









     }
	
	
	
	
	return 0;
}
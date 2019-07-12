//https://practice.geeksforgeeks.org/problems/parenthesis-checker/0

//1. My approach

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	
	int t;

	cin>>t;
	while(t--)
	{
	    
	    stack <char> s; 
	    string p;
	    cin>>p;
	    int size=p.length();
	    int max=0;
	    
	    	int order=0;
	    for(auto it=p.cbegin();it!=p.cend();++it)
	    {
	       
	        if(*it=='{' ||*it=='('||*it=='[')
	        {
 s.push(*it);
	           
	            
	            
	        }
	        if(*it=='}' ||*it==')'||*it==']')
	        {
	            if(s.size()!=0)
	            {
	                
	                if(*it=='}')
	                {
	                  if( s.top()=='{')
	                  {
	                      s.pop();
	                     
	                      
	                  }
	                  else
	                  {
	                  break;
	                  }
	                }
	                
	                
	                if(*it==')')
	                {
	                  if( s.top()=='(')
	                  {
	                      s.pop();
	                     
	                  }
	                  else
	                  {
	                  break;
	                  }
	                }
	                
	                
	                
	                if(*it==']')
	                {
	                  if( s.top()=='[')
	                  {
	                      s.pop();
	                    
	                  }
	                  else
	                  {
	                  break;
	                  }
	                }
	                
	                
	                
	            }
	            else
	            {
	                
	                s.push(*it);
	                break;
	            }
	            
	            
	        }
	        
	    }
	    if(s.size()==0)
	    cout<<"balanced"<<endl;
	    else
	    cout<<"not balanced"<<endl;
	    
	    
	    
	    
	      
	        
	    }
	 
	  
	    
	    
	    
	    
	    
	
	
	return 0;
}
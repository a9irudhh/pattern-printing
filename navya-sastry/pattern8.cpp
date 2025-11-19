#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int i,n;
	char j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    for(j=i;j<=n;j++)
	    {
	        cout<<" ";
	    }
	    
	    for(int k=1;k<=(2*i-1);k++)
	    {
	        cout<<"*";
	    }
	    
	    cout<<endl;
	}
    for(i=n;i>=1;i--)
	{
	    for(j=i;j<=n;j++)
	    {
	        cout<<" ";
	    }
	    
	    for(int k=1;k<=(2*i-1);k++)
	    {
	        cout<<"*";
	    }
	    
	    cout<<endl;
	}

}
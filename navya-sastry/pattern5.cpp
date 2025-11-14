#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int i,n;
	char j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
	    {
	        if(i==1||i==n||j==1||j==n)
	        cout<<"*";
	        else
	        cout<<" ";
	    }
	    
	    cout<<endl;
	}

}
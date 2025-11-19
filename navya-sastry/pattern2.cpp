#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int i,j,n;
	cin>>n;
	for(i=n;i>=0;i--)
	{
	    for(j=0;j<i;j++)
	    {
	        cout<<"*"<<"\t";
	    }
	    
	    cout<<endl;
	}

}
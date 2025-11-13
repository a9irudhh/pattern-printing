#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int i,n;
	char j;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    for(j='A';j<=i+'A';j++)
	    {
	        cout<<j<<"\t";
	    }
	    
	    cout<<endl;
	}

}
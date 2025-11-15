#include<bits/stdc++.h>
using namespace std;

//pascal triangle pattern
int main()
{
    int n,i,j,space;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        int val=1;
        for(j=0;j<=i;j++)
        {
            cout<<val<<" ";
            val=val*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}
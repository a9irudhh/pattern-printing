 /*pattern printing 1


1. Right-Angled Triangle of Stars
Input: 5 Output:

*
**
***
****
*****

*/

#include<bits/stdc++.h>
using namespace std;


int main()
{ 
int n;
n=5;
int a[n];

for(int i=1;i<=n;i++)
{
 for(int j=0;j<i;j++)
 cout<<"*";
 cout<<endl;
}


return 0;
}

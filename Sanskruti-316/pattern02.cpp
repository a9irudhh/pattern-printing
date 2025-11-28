 /*pattern printing 2


2. Inverted Right-Angled Triangle
Input: 5 Output:

*****
****
***
**
*

*/

#include<bits/stdc++.h>
using namespace std;


int main()
{ 
int n;
n=5;
int a[n];

for(int i=n;i>=0;i--)
{
 for(int j=0;j<i;j++)
 cout<<"*";
 cout<<endl;
}


return 0;
}

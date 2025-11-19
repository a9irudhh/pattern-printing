 /*pattern printing 10 
 
 
10. Floyd’s Triangle
Input: 5 Output:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15



*/

#include<bits/stdc++.h>
using namespace std;


int main()
{ 
int n;
n=5;
int a[n];
int num=1;
for(int i=1;i<=n;i++)
{
 for(int j=0;j<i;j++)
 {cout<<num<<" ";
 num++;}
 cout<<endl;
}


return 0;
}

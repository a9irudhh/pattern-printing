 /*pattern printing 11
 
11. Butterfly Pattern
Input: 4 Output:

*      *
**    **
***  ***
********
***  ***
**    **
*      *



*/

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    n=5;

   for( int i=1;i<=n;i++)
   {
       for(int j=1;j<i;j++)
       {
           cout<<"*";
       }
        for(int j=1;j<=2*(n-i);j++)
       {
           cout<<" ";
       }
         for(int j=1;j<i;j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
   
   n=n-1;
    for( int i=1;i<=n;i++)
   {
       for(int j=1;j<(n-i+1);j++)
       {
           cout<<"*";
       }
        for(int j=1;j<=2*(i);j++)
       {
           cout<<" ";
       }
         for(int j=1;j<(n-i+1);j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
    
    return 0;
}

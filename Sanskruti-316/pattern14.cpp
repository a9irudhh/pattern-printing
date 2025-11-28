 /*
 
4. Hollow Diamond in a Square
Input: 5 Output:

*****
** **
*   *
** **
*****


*/

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    n=3;
       for( int i=0;i<n;i++)
   {
       for(int j=0;j<(n-i);j++)
       {
           cout<<"*";
       }
        for(int j=0;j<(2*i);j++)
       {
           cout<<" ";
       }
       for(int j=0;j<(n-i);j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
   

   for( int i=1;i<=n;i++)
   { if(i==1)
    continue;
       for(int j=0;j<(i);j++)
       {
           cout<<"*";
       }
        for(int j=0;j<2*(n-i);j++)
       {
           cout<<" ";
       }
     
       for(int j=0;j<(i);j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
    
  
   
    return 0;

}

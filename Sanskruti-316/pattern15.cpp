 /*pattern printing 
 

15. Hourglass Pattern
Input: 5 Output:

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********



*/

  
   
   /*pattern printing 8
 



#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    n=5;
    for( int i=0;i<n;i++)
   {cout<<" "; //jugaad
       for(int j=0;j<(i);j++)
       {
           cout<<" ";
       }
        for(int j=0;j<2*(n-i)-1;j++)
       {
           cout<<"*";
       }
     
       cout<<endl;
   }
    
       for( int i=0;i<n;i++)
   { 
       if(i==0)
       continue;
       cout<<" ";
       for(int j=0;j<(n-i-1);j++)
       {
           cout<<" ";
       }
        for(int j=0;j<(2*i+1);j++)
       {
           cout<<"*";
       }
      
       cout<<endl;
   }
  

   
  
   
    return 0;

}

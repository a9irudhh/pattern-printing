#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 

    for(int i=n; i>=1; i--)
    {
        for(int s=1; s<=n-i; s++)
            cout<<" ";

        for(int k=1; k<=2*i-1; k++)
            cout<<"*";

        cout<<endl;
    }
    for(int i=2; i<=n; i++)
    {
        for(int s=1; s<=n-i; s++)
            cout<<" ";

        for(int k=1; k<=2*i-1; k++)
            cout<<"*";

        cout<<endl;
    }
}

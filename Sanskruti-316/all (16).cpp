#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
     n=3;

    for(int i = 0; i < n; i++) {
       cout<<"*";
        for(int j = 0; j < i; j++)
        cout << " ";

        cout << "*";

       
        if(i != n - 1) {
            for(int j = 0; j < 2*(n - i - 1) - 1; j++)
            cout << " ";
            cout << "*";
        }
         for(int j = 0; j < i; j++)
        cout << " ";

   cout<<"*";
        cout << "\n";
    }

    return 0;
}

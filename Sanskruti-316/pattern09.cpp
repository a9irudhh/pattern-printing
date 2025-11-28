/*
9. Pascal’s Triangle (Numbers)
Input: 5 Output:

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

*/



    
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    n=5;

    vector<int> u, v;

    for (int i = 0; i < n; i++) {
        v.clear();
        v.push_back(1);

        for (int j = 1; j < i; j++) {
            v.push_back(u[j-1] + u[j]);
        }

        if (i > 0)
            v.push_back(1);

        for (int x : v)
            cout << x << " ";
        cout << endl;

        u = v;
    }

    return 0;
}



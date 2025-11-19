 /* 12. Palindromic Number Pyramid
Input: 5 Output:

    1
   121
  12321
 1234321
123454321

*/


#include <bits/stdc++.h>
using namespace std;
   int main() {
    int n;
    n=5;

    for (int i = 0; i < n; i++) 
    {
        for (int s = 0; s < n - i - 1; s++)
            cout << " ";

        int num = 1;
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j < i) {
                cout << num;
                num++;
            } else {
                
                cout << num;
                num--;
            }
        }

        cout << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int n;
    cin >> n;

    int *alist = new int[21];
    alist[0] = 0;
    alist[1] = 0;
    alist[2] = 1;
    alist[3] = 1;

    if (n == 1) {cout << 0 << endl; return 0;}
    if (n == 2) {cout << 1 << endl; return 0;}
    if (n == 3) {cout << 1 << endl; return 0;}

    for ( int i = 4; i <= n; i++)
        alist[i] = alist[i-3] + 2*alist[i-2] + alist[i-1];

    cout << alist[n] << endl;
    return 0;    
}

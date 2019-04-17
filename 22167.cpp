#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0)
            break;
        else
            cout << a + b << endl;
    }
    return 0;    
}

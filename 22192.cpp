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

    for (int i = 1; i <= n; i++)
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
            cout << i << endl;
    return 0;    
}

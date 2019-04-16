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

    double result = n * 1024 * 1024 / 4;
    cout << (int)result << endl;
    return 0;    
}

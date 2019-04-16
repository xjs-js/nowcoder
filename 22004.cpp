#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    double f = 0, c = 0;
    cin >> f;

    c = 5.0 / 9 * (f - 32);
    printf("%.3f\n", c);
    return 0;    
}

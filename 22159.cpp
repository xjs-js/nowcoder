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
    double result = (n * n * n + 3 * n * n + 2 * n) / 6;
    printf("%.0f\n", result);
    return 0;    
}

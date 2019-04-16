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

    double result = 0;
    for (int i = 1; i <= n; ++i) {
        result = result + 1.0 / i;
    }

    printf("%.6f\n", result);
    return 0;    
}

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

    double down = 1;
    double sum = 1;

    for ( int i = 2; i <= n; i++ ) {
        down = down + pow(-1, i-1) * (2 * i - 1);
        sum += 1 / down;    
    }

    printf("%.3f\n", sum);
    return 0;    
}

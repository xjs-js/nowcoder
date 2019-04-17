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

    int sum = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            sum = sum + i;

    cout << sum << endl;
    return 0;    
}

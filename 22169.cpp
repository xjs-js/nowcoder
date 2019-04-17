#include <bits/stdc++.h>

using namespace std;

bool is_pali(int n)
{
    int origin = n;
    int b = 0;
    while (n) {
        b = b * 10 + n % 10;
        n = n / 10;  
    }

    return (b == origin);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        if (is_pali(i))
            cout << i << endl;

    return 0;    
}

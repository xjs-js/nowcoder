#include <bits/stdc++.h>

using namespace std;


bool is_true(int n)
{
    bool result = false;
    
    while (n) {
        int digit = n % 10;
        if (digit == 5) {
            result = true;
            break;
        }
        n = n / 10;
    }
    
    return result;    
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
        if (i % 3 == 0 && is_true(i))
            cout << i << endl;

    return 0;    
}

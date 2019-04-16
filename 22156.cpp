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
    if (n % 2 == 0) {
        int result = n / 2 * -1;
        cout << result << endl;    
    } else {
        int result = (n-1) / 2 * -1 + n;
        cout << result << endl;
    }
    return 0;    
}

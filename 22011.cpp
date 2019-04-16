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

    if ( n > 50 || n % 2 == 0 ) {
        cout << "yes" << endl;    
    } else {
        cout << "no" << endl;
    }
    return 0;    
}

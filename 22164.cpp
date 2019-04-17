#include <bits/stdc++.h>

using namespace std;

int gcd (int p, int q)
{
    if ( q == 0 ) return p;
    return gcd(q, p%q);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int a, b;
    cin >> a >> b;
    
    cout << gcd(a, b) << endl;    
    
    return 0;    
}

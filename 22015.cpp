#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int a, b, c;
    cin >> a >> b >> c;

    int smaller = min(min(a, b), c);
    int greater = max(max(a, b), c);

    cout << "The maximum number is : " << greater << endl;
    cout << "The minimum number is : " << smaller << endl; 
    return 0;    
}

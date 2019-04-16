#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;


    int x, y;
    cin >> x >> y;

    int bigger = x > y ? x : y;
    int lower = x < y ? x : y;

    cout << bigger << endl;
    cout << lower << endl;
    return 0;    
}

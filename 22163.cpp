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

    int count = 0;
    while ( n != 1) {
        if (n % 2 == 0)
            n = n/2;
        else 
            n = n * 3 + 1;
        count = count + 1;    
    }

    cout << count << endl;
    return 0;    
}
